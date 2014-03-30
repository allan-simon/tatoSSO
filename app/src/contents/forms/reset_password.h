/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com>
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @package  Forms
 *
 */

#ifndef TATO_SSO_ADMINS_RESET_PASSWORD
#define TATO_SSO_ADMINS_RESET_PASSWORD


#include <cppcms/form.h>

namespace tatosso {
namespace forms{
namespace admins {

/**
 * @struct reset_password @TODO
 * @since  31 March 2014
 *
 */
struct ResetPassword : public cppcms::form {

    //%%%NEXT_WIDGET_VAR_MARKER%%%

    /**
     * @brief button to submit the form
     */
    cppcms::widgets::submit submit;

    /**
     * @brief Constructor
     */
    ResetPassword() {

        //%%%NEXT_WIDGET_ADD_MARKER%%%

        add(submit);
        submit.name(
            cppcms::locale::translate("submit")
        );
        submit.value("submit");
    }


};


} // end of namespace admins
} // end of namespace forms
} // end of namespace tatosso


#endif


