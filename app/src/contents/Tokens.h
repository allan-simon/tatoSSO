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

#ifndef TATO_SSO_CONTENTS_TOKENS_H
#define TATO_SSO_CONTENTS_TOKENS_H

#include "cppcms_skel/contents/content.h"

#include "contents/forms/external_login.h"
//%%%NEXT_CONTENT_FORM_INCLUDE_MARKER%%%

namespace tatosso {
namespace contents {
namespace tokens {

/**
 * @class Tokens
 * @brief Base content for every action of Tokens controller
 * @since 31 March 2014
 */
struct Tokens : public ::contents::BaseContent {
};

/**
 * @struct CheckToken
 * @since  31 March 2014
 */
struct CheckToken : public Tokens {

    CheckToken() {

    }

};

/**
 * @struct ExternalLogin
 * @since  31 March 2014
 */
struct ExternalLogin : public Tokens {

    forms::tokens::ExternalLogin externalLoginForm;

    /**
     * @brief Constructor
     */
    ExternalLogin() {
    }

};

//%%%NEXT_CONTENT_MARKER%%%

} // end of namespace tokens
} // end of namespace contents
} // end of namespace tatosso

#endif
