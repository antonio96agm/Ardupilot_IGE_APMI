#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#ifndef AP_WINCH_ENABLED
#define AP_WINCH_ENABLED 1
#endif

#ifndef AP_WINCH_BACKEND_DEFAULT_ENABLED
#define AP_WINCH_BACKEND_DEFAULT_ENABLED AP_WINCH_ENABLED
#endif

#ifndef AP_WINCH_DAIWA_ENABLED
#define AP_WINCH_DAIWA_ENABLED AP_WINCH_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_WINCH_PWM_ENABLED
#define AP_WINCH_PWM_ENABLED AP_WINCH_BACKEND_DEFAULT_ENABLED
#endif
