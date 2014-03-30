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

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <limits>
#include <cppdb/frontend.h>

#include "models/Tokens.h"


namespace tatosso {
namespace models {

/**
 *
 */
Tokens::Tokens() :
    SqliteModel()
{
}


} // end namespace models
} // end namespace tatosso


