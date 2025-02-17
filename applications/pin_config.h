/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-08-06     Rick       the first version
 */

#ifndef APPLICATIONS_PIN_CONFIG_H_
#define APPLICATIONS_PIN_CONFIG_H_

/*
 * SENSOR
 */
#define SENSOR_LEAK_PIN                 3
#define SENSOR_LOST_PIN                 2
/*
 * MOTO
 */
#define MOTO_LEFT_HALL_PIN              4
#define MOTO_LEFT_CONTROL_PIN           8
#define MOTO_RIGHT_HALL_PIN             5
#define MOTO_RIGHT_CONTROL_PIN          11
/*
 * KEY
 */
#define KEY_ON_PIN                      0
#define KEY_OFF_PIN                     1
/*
 * LED
 */
#define LED_OFF_RED_PIN                 7
#define LED_ON_GREEN_PIN                6
/*
 * BUZZER
 */
#define BEEP_PIN                        12

#endif /* APPLICATIONS_PIN_CONFIG_H_ */
