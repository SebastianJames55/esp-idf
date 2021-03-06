// Copyright 2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "soc/soc.h"
#include "soc/rtc.h"
#include "soc/rtc_cntl_reg.h"

#ifdef __cplusplus
extern "C" {
#endif

static inline void rtc_cntl_ll_set_wakeup_timer(uint64_t t)
{
    abort(); // ESP32-C3 TODO IDF-2106
}

static inline uint32_t rtc_cntl_ll_ext1_get_wakeup_pins(void)
{
    abort(); // ESP32-C3 TODO IDF-2106
}

static inline void rtc_cntl_ll_ext1_set_wakeup_pins(uint32_t mask, int mode)
{
    abort(); // ESP32-C3 TODO IDF-2106
}

static inline void rtc_cntl_ll_ext1_clear_wakeup_pins(void)
{
    abort(); // ESP32-C3 TODO IDF-2106
    REG_SET_BIT(RTC_CNTL_GPIO_WAKEUP_REG, RTC_CNTL_GPIO_WAKEUP_STATUS_CLR);
}

#ifdef __cplusplus
}
#endif
