/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com> 
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com> 
 * @package  Controllers
 *
 */

#ifndef CONTROLLERS_WEBS_PAGES_H
#define CONTROLLERS_WEBS_PAGES_H

#include "cppcms_skel/controllers/webs/Controller.h"

namespace controllers {
namespace webs { 
/**
 * @class Pages
 * contains all functions to generate all independant pages
 */
class Pages : public Controller {
    public:
        /**
         * Constructor
         */
        Pages(cppcms::service &serv);
        /**
         * generate home page
         */
        void homepage();
        /**
         * Main page to add sentences and so
         */
        void contribute();
        /**
         * Terms of use page
         */
        void terms_of_use();
        /**
         * Team and Credits page
         */
        void team_and_credits();
        //TODO doc

        /**
         * @brief Display nothing, only to treat the form which permit
         *        to change the language of the user interface
         * @since 2 September 2011
         */
        void change_interface_lang_treat();
};

} // End namespace webs
} // End namespace generics

#endif
