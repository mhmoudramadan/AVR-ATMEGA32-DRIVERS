/*
 * MTIMER0_Config.h
 *
 *  Created on: Feb 12, 2022
 *      Author: Dell
 */

#ifndef MCAL_MTIMER0_MTIMER0_CONFIG_H_
#define MCAL_MTIMER0_MTIMER0_CONFIG_H_

/*TIMER0 PreScaler Options
 *
 * 1-TIMER0_NOPRESCALER
 * 2-TIMER0_PRESCALER_8
 * 3-TIMER0_PRESCALER_64
 * 4-TIMER0_PRESCALER_256
 * 5-TIMER0_PRESCALER_1024
 * 6-TIMER0_EXTRERNALCLOCK_FALLINGEDGE
 * 7-TIMER0_EXTRERNALCLOCK_RISINGEDGE
 * */
#define TIMER0_SETPRESCALER  TIMER0_PRESCALER_8

/*Timer0 MODE Options
 * 1-TIMER0_CTCMODE
 * 2-TIMER0_NORMALMODE
 * 3-TIMER0_FASTPWMMODE
 * 4-TIMER0_PHASECORRECTPWMMODE*/

#define TIMER0_SETMODE TIMER0_FASTPWMMODE

/*OC0 PIN MODES
 * 1-TIMER0_CTCMODE_TOGGLE_OC0PIN
 * 2-TIMER0_CTCMODE_SET_OC0PIN
 * 3-TIMER0_CTCMODE_CLR_OC0PIN
 * 4-TIMER0_CTCMODE_NOTCONNECTED_OC0PIN
 * */
#define TIMER0_CTCMODE_OC0PINMODE  TIMER0_CTCMODE_NOTCONNECTED_OC0PIN
/* PWM MODE OC0 Pin mode
 * 1-TIMER0_PWMMODE_NON_INVERTING -->(CLR OC0 On Compare Match and Set OC0 At Top)(CLR OC0-->upcount )
 * 2-TIMER0_PWMMODE_INVERTING -->(SET OC0 On Compare Match and CLR OC0 At Top) (SET OC0-->upcount )*/

#define TIMER0_PWMMODE_OC0PINMODE  TIMER0_PWMMODE_NON_INVERTING

#endif /* MCAL_MTIMER0_MTIMER0_CONFIG_H_ */
