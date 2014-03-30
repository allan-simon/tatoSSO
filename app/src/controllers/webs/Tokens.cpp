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
#include "Tokens.h"


#include "contents/Tokens.h"

#include "models/Tokens.h"
#include "models/Tickets.h"
//%%%NEXT_INC_MODEL_CTRL_MARKER%%%


namespace tatosso {
namespace controllers {
namespace webs {

Tokens::Tokens(cppcms::service& serv) :
    ::controllers::webs::Controller(serv)
{

    dispatcher().assign("/check-token", &Tokens::check_token, this);
    dispatcher().assign("/kick-user", &Tokens::kick_user, this);

    dispatcher().assign("/external-login", &Tokens::external_login, this);
    dispatcher().assign("/external-login_treat", &Tokens::external_login_treat, this);
    //%%%NEXT_ACTION_DISPATCHER_MARKER%%%, do not delete


    tokensModel = new models::Tokens();
    ticketsModel = new models::Tickets();
    //%%%NEXT_NEW_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
Tokens::~Tokens() {
    delete tokensModel;
    delete ticketsModel;
    //%%%NEXT_DEL_MODEL_CTRL_MARKER%%%
}

/**
 *
 */
void Tokens::check_token() {

    contents::tokens::CheckToken c;
    init_content(c);


    render("tokens_check_token", c);
}

/**
 *
 */
void Tokens::kick_user() {
    add_message("kick_user");
    go_back_to_previous_page();
}

/**
 *
 */
void Tokens::external_login() {

    contents::tokens::ExternalLogin c;
    init_content(c);


    render("tokens_external_login", c);
}


/**
 *
 */
void Tokens::external_login_treat() {

    forms::tokens::ExternalLogin form;
    form.load(context());

    if (!form.validate()) {
        go_back_to_previous_page();
    }

}


// %%%NEXT_ACTION_MARKER%%% , do not delete




} // End namespace webs
} // End namespace controllers
} // End namespace tatosso
