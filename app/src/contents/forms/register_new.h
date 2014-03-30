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

#ifndef TATO_SSO_USERS_REGISTER_NEW
#define TATO_SSO_USERS_REGISTER_NEW


#include <cppcms/form.h>

namespace tatosso {
namespace forms{
namespace users {

/**
 * @struct register_new @TODO
 * @since  31 March 2014
 *
 */
struct RegisterNew : public cppcms::form {

    //%%%NEXT_WIDGET_VAR_MARKER%%%

    /**
     * @brief button to submit the form
     */
    cppcms::widgets::submit submit;

    /**
     * @brief Constructor
     */
    RegisterNew() {

        //%%%NEXT_WIDGET_ADD_MARKER%%%

        add(submit);
        submit.name(
            cppcms::locale::translate("submit")
        );
        submit.value("submit");
    }


};


} // end of namespace users
} // end of namespace forms
} // end of namespace tatosso


#endif


