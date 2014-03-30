/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com>
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com> 
 * @package  Contents
 *
 */

#ifndef TATO_SSO_CONTENTS_USERS_H
#define TATO_SSO_CONTENTS_USERS_H

#include "cppcms_skel/contents/content.h"

#include "contents/forms/login.h"
#include "contents/forms/register_new.h"
//%%%NEXT_CONTENT_FORM_INCLUDE_MARKER%%%

namespace tatosso {
namespace contents {
namespace users {

/**
 * @class Users
 * @brief Base content for every action of Users controller
 * @since 31 March 2014
 */
struct Users : public ::contents::BaseContent {
};

/**
 * @struct ShowAll
 * @since  31 March 2014
 */
struct ShowAll : public Users {

    ShowAll() {

    }

};

/**
 * @struct Login
 * @since  31 March 2014
 */
struct Login : public Users {

    forms::users::Login loginForm;

    /**
     * @brief Constructor
     */
    Login() {
    }

};

/**
 * @struct RegisterNew
 * @since  31 March 2014
 */
struct RegisterNew : public Users {

    forms::users::RegisterNew registerNewForm;

    /**
     * @brief Constructor
     */
    RegisterNew() {
    }

};

//%%%NEXT_CONTENT_MARKER%%%

} // end of namespace users
} // end of namespace contents
} // end of namespace tatosso

#endif
