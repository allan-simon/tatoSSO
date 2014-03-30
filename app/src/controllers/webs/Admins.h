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

#ifndef TATO_SSOCONTROLLERS_WEBS_ADMINS_H
#define TATO_SSOCONTROLLERS_WEBS_ADMINS_H

#include <cppcms_skel/controllers/webs/Controller.h>


//needed to avoid to include models directly here,
//which would have the side effects to require to recompile the
// controller every time we modify a model. even though it does
// not affect the controller
namespace tatosso {

namespace models {
    // %%%NEXT_CLASS_MODEL_CTRL_MARKER%%%
}

namespace controllers {
namespace webs {
/**
 * @class Admins module to centralize administrator actions
 * @since 31 March 2014
 */
class Admins : public ::controllers::webs::Controller {
    public:
        /**
         * @brief Constructor
         * @since 31 March 2014
         */
        Admins(cppcms::service &serv);

        /**
         * @brief Destructor
         * @since 31 March 2014
         */
        ~Admins();

    private:
        // %%%NEXT_VAR_MODEL_CTRL_MARKER%%%

        /**
         * @TODO
         * @since 31 March 2014
         */
        void reset_password();

        /**
         * @TODO
         * @since 31 March 2014
         */
        void reset_password_treat();

// %%%NEXT_ACTION_MARKER%%% , do not delete

};

} // End namespace webs
} // End namespace controllers
} // End namespace tatosso

#endif
