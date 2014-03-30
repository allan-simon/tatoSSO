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
#include "Admins.h"


#include "contents/Admins.h"

//%%%NEXT_INC_MODEL_CTRL_MARKER%%%


namespace tatosso {
namespace controllers {
namespace webs {

Admins::Admins(cppcms::service& serv) :
    ::controllers::webs::Controller(serv)
{


    dispatcher().assign("/reset-password", &Admins::reset_password, this);
    dispatcher().assign("/reset-password_treat", &Admins::reset_password_treat, this);
    //%%%NEXT_ACTION_DISPATCHER_MARKER%%%, do not delete


    //%%%NEXT_NEW_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
Admins::~Admins() {
    //%%%NEXT_DEL_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
void Admins::reset_password() {

    contents::admins::ResetPassword c;
    init_content(c);


    render("admins_reset_password", c);
}


/**
 *
 */
void Admins::reset_password_treat() {

    forms::admins::ResetPassword form;
    form.load(context());

    if (!form.validate()) {
        go_back_to_previous_page();
    }

}


// %%%NEXT_ACTION_MARKER%%% , do not delete




} // End namespace webs
} // End namespace controllers
} // End namespace tatosso
