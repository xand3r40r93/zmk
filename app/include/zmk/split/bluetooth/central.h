
#pragma once

#include <bluetooth/addr.h>
#include <zmk/behavior.h>
#include <zmk/led_indicators_types.h>

int zmk_split_bt_invoke_behavior(uint8_t source, struct zmk_behavior_binding *binding,
                                 struct zmk_behavior_binding_event event, bool state);

int zmk_split_bt_update_leds(zmk_leds_flags_t leds);
