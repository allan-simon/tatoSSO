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

#ifndef TATO_SSO_%%CONTROLLER_INCLUDE%%_%%FORM_INCLUDE%%
#define TATO_SSO_%%CONTROLLER_INCLUDE%%_%%FORM_INCLUDE%%


#include <cppcms/form.h>

namespace tatosso {
namespace forms{
namespace %%CONTROLLER_NS%% {

/**
 * @struct %%FORM_NAME%% %%FORM_DESCRIPTION%%
 * @since  %%FORM_TODAY%%
 *
 */
struct %%FORM_STRUCT%% : public cppcms::form {

    //%%%NEXT_WIDGET_VAR_MARKER%%%

    /**
     * @brief button to submit the form
     */
    cppcms::widgets::submit submit;

    /**
     * @brief Constructor
     */
    %%FORM_STRUCT%%() {

        //%%%NEXT_WIDGET_ADD_MARKER%%%

        add(submit);
        submit.name(
            cppcms::locale::translate("%%FORM_SUBMIT_UI%%")
        );
        submit.value("submit");
    }


};


} // end of namespace %%CONTROLLER_NS%%
} // end of namespace forms
} // end of namespace tatosso


#endif


