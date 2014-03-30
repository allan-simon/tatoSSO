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

#ifndef TATO_SSO_TOKENS_EXTERNAL_LOGIN
#define TATO_SSO_TOKENS_EXTERNAL_LOGIN


#include <cppcms/form.h>

namespace tatosso {
namespace forms{
namespace tokens {

/**
 * @struct external_login @TODO
 * @since  31 March 2014
 *
 */
struct ExternalLogin : public cppcms::form {

    //%%%NEXT_WIDGET_VAR_MARKER%%%

    /**
     * @brief button to submit the form
     */
    cppcms::widgets::submit submit;

    /**
     * @brief Constructor
     */
    ExternalLogin() {

        //%%%NEXT_WIDGET_ADD_MARKER%%%

        add(submit);
        submit.name(
            cppcms::locale::translate("submit")
        );
        submit.value("submit");
    }


};


} // end of namespace tokens
} // end of namespace forms
} // end of namespace tatosso


#endif


