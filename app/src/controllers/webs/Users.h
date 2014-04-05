/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com>
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @package  Controllers
 * @link     https://github.com/allan-simon/tatosso@
 *
 */

#ifndef TATO_SSOCONTROLLERS_WEBS_USERS_H
#define TATO_SSOCONTROLLERS_WEBS_USERS_H

#include <cppcms_skel/controllers/webs/Controller.h>


//needed to avoid to include models directly here,
//which would have the side effects to require to recompile the
// controller every time we modify a model. even though it does
// not affect the controller
namespace cppcmsskel {
namespace models {
    class Users;
    // %%%NEXT_CLASS_MODEL_CTRL_MARKER%%%
}
}

namespace tatosso {

namespace models {
    class Tickets;
    // %%%NEXT_CLASS_MODEL_CTRL_MARKER%%% 
}

namespace controllers {
namespace webs {
/**
 * @class Users module to centralize user related actions
 * @since 31 March 2014
 */
class Users : public ::controllers::webs::Controller {
    public:
        /**
         * @brief Constructor
         * @since 31 March 2014
         */
        Users(cppcms::service &serv);

        /**
         * @brief Destructor
         * @since 31 March 2014
         */
        ~Users();

    private:

        cppcmsskel::models::Users *usersModel;

        /**
         * @since %%MODEL_CTRL_TODAY%%
         */
        tatosso::models::Tickets *ticketsModel;

        // %%%NEXT_VAR_MODEL_CTRL_MARKER%%%
    

        /**
         * @TODO
         * @since 31 March 2014
         */
        void show_all();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void logout();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void delete_by_id();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void login();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void login_treat();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void register_new();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void register_new_treat();

// %%%NEXT_ACTION_MARKER%%% , do not delete

};

} // End namespace webs
} // End namespace controllers
} // End namespace tatosso

#endif
