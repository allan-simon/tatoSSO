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

#ifndef TATO_SSO_CONTENTS_ADMINS_H
#define TATO_SSO_CONTENTS_ADMINS_H

#include "cppcms_skel/contents/content.h"

#include "contents/forms/reset_password.h"
//%%%NEXT_CONTENT_FORM_INCLUDE_MARKER%%%

namespace tatosso {
namespace contents {
namespace admins {

/**
 * @class Admins
 * @brief Base content for every action of Admins controller
 * @since 31 March 2014
 */
struct Admins : public ::contents::BaseContent {
};

/**
 * @struct ResetPassword
 * @since  31 March 2014
 */
struct ResetPassword : public Admins {

    forms::admins::ResetPassword resetPasswordForm;

    /**
     * @brief Constructor
     */
    ResetPassword() {
    }

};

//%%%NEXT_CONTENT_MARKER%%%

} // end of namespace admins
} // end of namespace contents
} // end of namespace tatosso

#endif
