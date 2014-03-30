/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com> 
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com> 
 * @package  Apps
 *
 */

#ifndef TATO_SSO_H 
#define TATO_SSO_H

/**
 * @file TatoSSO.h
 */
#include <map>

#include <cppcms/application.h>
#include <cppdb/frontend.h>

#include <cppcms_skel/controllers/webs/Img.h>
#include <cppcms_skel/controllers/webs/Css.h>
#include <cppcms_skel/controllers/webs/Js.h>

#include "controllers/webs/Admins.h"
#include "controllers/webs/Tokens.h"
#include "controllers/webs/Users.h"
//%%%NEXT_CONTROLLER_INCLUDE_MARKER%%%, do not delete
#include "controllers/webs/Pages.h"

/** 
 * @namespace apps
 */
namespace tatosso {
namespace apps {

/** 
 * @class TatoSSO 
 * Application class representing the website
 * All http request will be dispatched by this class
 */
class TatoSSO : public cppcms::application {

private:
    //%%%NEXT_MAIN_APP_CTRL_ATTR%%%
    controllers::webs::Users users;
    controllers::webs::Tokens tokens;
    controllers::webs::Admins admins;
    ::controllers::webs::Img img;
    ::controllers::webs::Css css;
    ::controllers::webs::Js js;
    ::controllers::webs::Pages pages;

    /**
     * Based on http header, we will try to guess the most suitable
     * interface language
     *
     * @return The interface language code
     *
     * @since 5 September 2011
     *
     * @TODO for the moment it's a very naive algo
     */  
    std::string get_default_interface_lang();

public:
    /**
     * Constructor
     * Will connect every controllers to their respective paths
     * @param serv
     */
	TatoSSO(cppcms::service &serv);

    /**
     * Method who receive all web requests
     * get the user language of interface from url
     * @param url : url asked by user
     */
	void main(std::string url);
}; 

} // namespace apps
} // end namespace tatosso
#endif
