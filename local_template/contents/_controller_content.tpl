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

#ifndef TATO_SSO_CONTENTS_%%CONTROLLER_INCLUDE%%_H
#define TATO_SSO_CONTENTS_%%CONTROLLER_INCLUDE%%_H

#include "cppcms_skel/contents/content.h"

//%%%NEXT_CONTENT_FORM_INCLUDE_MARKER%%%

namespace tatosso {
namespace contents {
namespace %%CONTROLLER_NS%% {

/**
 * @class %%CONTROLLER_NAME%%
 * @brief Base content for every action of %%CONTROLLER_NAME%% controller
 * @since %%CONTROLLER_TODAY%%
 */
struct %%CONTROLLER_NAME%% : public ::contents::BaseContent {
};

//%%%NEXT_CONTENT_MARKER%%%

} // end of namespace %%CONTROLLER_NS%%
} // end of namespace contents
} // end of namespace tatosso

#endif
