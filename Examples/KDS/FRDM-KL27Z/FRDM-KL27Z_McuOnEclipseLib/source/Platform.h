/*
 * Platform.h
 *
 *  Created on: 21.01.2017
 *      Author: Erich Styger
 */

#ifndef SOURCE_PLATFORM_H_
#define SOURCE_PLATFORM_H_

#define PL_CONFIG_HAS_SHELL     (1)
#define PL_CONFIG_HAS_TIME_DATE (0)
#define PL_CONFIG_HAS_I2C       (1)
#define PL_CONFIG_HAS_ACCEL     (1 && PL_CONFIG_HAS_I2C)
#define PL_CONFIG_HAS_I2CSPY    (0 && PL_CONFIG_HAS_I2C && PL_CONFIG_HAS_SHELL)

#endif /* SOURCE_PLATFORM_H_ */
