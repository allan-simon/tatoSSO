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

#include <iostream>
#include <string>

#include <cppcms/application.h>
#include <cppcms/url_dispatcher.h>
#include <cppcms/http_response.h>
#include <cppcms/http_request.h>
#include <cppcms/http_context.h>
#include <cppcms/session_interface.h>



#include "TatoSSO.h"
#include "cppcms_skel/generics/Languages.h"


// @TODO move the default language in the configuration
// file, so that it can easily changed without recompiling

#define DEFAULT_INTERFACE_LANG "en"

namespace tatosso {
namespace apps {

/**
 *
 */
TatoSSO::TatoSSO(cppcms::service &serv) :
    cppcms::application(serv),
    //%%%NEXT_MAIN_APP_CTRL_CONSTRUCT_MARKER%%%
    users(serv),
    
    tokens(serv),
    
    admins(serv),
    
    img(serv),
    css(serv),
    js(serv),
    pages(serv)
{

    //add(sentencesApi, "^/api/sentences(.*)", 1);

    //add(#controller#,#mount_point#,1);

    add(admins,"^/admins(.*)",1);
    add(tokens,"^/tokens(.*)",1);
    add(users,"^/users(.*)",1);
    //%%%NEXT_CONTROLLER_DISPATCHER_MARKER%%%, do not delete

    add(css,"^/css(.*)",1);
    add(img,"^/img(.*)",1);
    add(js,"^/js(.*)",1);
    //NOTE important to add the page controller at the end
    //as its regexp is more global
    add(pages, "/(.*)", 1);


}

/**
 *
 */


void TatoSSO::main(std::string url) {
    
    std::string interfaceLang("");
    if (!session().is_set("interfaceLang")) {
        interfaceLang = get_default_interface_lang();
        session()["interfaceLang"] = interfaceLang;
    } else {
        interfaceLang = session()["interfaceLang"]; 
    }

    // we set the locale in which the page will be generated
    context().locale(
        Languages::get_instance()->get_locale_from_lang(interfaceLang)
    );
    // and we call the appropriate controller
    application::main(url);

    
}

/**
 * 
 */
std::string TatoSSO::get_default_interface_lang() {
    
    std::string acceptedLanguage = request().http_accept_language();
       
    size_t size = acceptedLanguage.size(); 
    // if the browser has sent no header indicating what is its prefered
    // language
    if (size == 0) {
        return DEFAULT_INTERFACE_LANG;
    }

    std::string lang;
   
     
    if (size == 2 || size == 3) {
        lang = acceptedLanguage;
    } else  {
        lang = acceptedLanguage.substr(0,2);
    }

    // if this language is part of the supported languages
    if (Languages::get_instance()->is_interface_lang(lang)) {
        return lang;
    } 
    
    return DEFAULT_INTERFACE_LANG;
}


} // end namespace app
} // end namespace tatosso
