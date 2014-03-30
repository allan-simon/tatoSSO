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

#include <cppcms/session_interface.h>
#include "Users.h"


#include "contents/Users.h"

#include "models/Tickets.h"
//%%%NEXT_INC_MODEL_CTRL_MARKER%%%


namespace tatosso {
namespace controllers {
namespace webs {

Users::Users(cppcms::service& serv) :
    ::controllers::webs::Controller(serv)
{

    dispatcher().assign("/show-all", &Users::show_all, this);
    dispatcher().assign("/logout", &Users::logout, this);
    dispatcher().assign("/delete-by-id", &Users::delete_by_id, this);

    dispatcher().assign("/login", &Users::login, this);
    dispatcher().assign("/login_treat", &Users::login_treat, this);

    dispatcher().assign("/register-new", &Users::register_new, this);
    dispatcher().assign("/register-new_treat", &Users::register_new_treat, this);
    //%%%NEXT_ACTION_DISPATCHER_MARKER%%%, do not delete



    ticketsModel = new models::Tickets();
    //%%%NEXT_NEW_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
Users::~Users() {
    delete ticketsModel;
    //%%%NEXT_DEL_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
void Users::show_all() {

    contents::users::ShowAll c;
    init_content(c);


    render("users_show_all", c);
}

/**
 *
 */
void Users::logout() {
    add_message("logout");
    go_back_to_previous_page();
}

/**
 *
 */
void Users::delete_by_id() {
    add_message("delete_by_id");
    go_back_to_previous_page();
}

/**
 *
 */
void Users::login() {

    contents::users::Login c;
    init_content(c);


    render("users_login", c);
}


/**
 *
 */
void Users::login_treat() {

    forms::users::Login form;
    form.load(context());

    if (!form.validate()) {
        go_back_to_previous_page();
    }

}


/**
 *
 */
void Users::register_new() {

    contents::users::RegisterNew c;
    init_content(c);


    render("users_register_new", c);
}


/**
 *
 */
void Users::register_new_treat() {

    forms::users::RegisterNew form;
    form.load(context());

    if (!form.validate()) {
        go_back_to_previous_page();
    }

}


// %%%NEXT_ACTION_MARKER%%% , do not delete




} // End namespace webs
} // End namespace controllers
} // End namespace tatosso
