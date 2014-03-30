/**
 * TatoSSO  Single Sign On (SSO) system
 *
 * Copyright (C) 2014 Allan SIMON <allan.simon@supinfo.com>
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category TatoSSO
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @package  Models
 *
 */

#ifndef TATO_SSO_TICKETS
#define TATO_SSO_TICKETS

#include <cppcms_skel/models/SqliteModel.h>

namespace tatosso {
namespace models {


/**
 * @class Tickets @TODO
 *
 * @since 31 March 2014
 *
 */
class Tickets : public cppcmsskel::models::SqliteModel {
    public:
        /**
         * @brief Constructor
         * @since 31 March 2014
         */
        Tickets();

};

} // end namespace models
} // end namespace tatosso

#endif
