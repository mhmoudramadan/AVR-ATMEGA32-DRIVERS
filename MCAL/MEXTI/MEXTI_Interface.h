/*
 * MEXTI_Inteface.h
 *
 *  Created on: Feb 4, 2022
 *      Author: Dell
 */

#ifndef MCAL_MEXTI_MEXTI_INTERFACE_H_
#define MCAL_MEXTI_MEXTI_INTERFACE_H_

#define MEXTI_RISING_EDGE       0
#define MEXTI_FALLING_EDGE      1
#define MEXTI_ANYLOGICALCHANGE  2
#define MEXTI_LOW_LEVEL         3

#define EXTI0    0
#define EXTI1    1
#define EXTI2    2

void MEXTI_VidInitEXTI0(void);
void MEXTI_VidInitEXTI1(void);
void MEXTI_VidInitEXTI2(void);
void MEXTI_VidSenseControlSelect(uint8 copy_uint8EXTI_ID,uint8 copy_uint8EXTI_SenseControl);
void MEXTI1_VidSetCallBack(void (*PtrToFun)(void));
void MEXTI0_VidSetCallBack(void (*PtrToFun)(void));
void MEXTI2_VidSetCallBack(void (*PtrToFun)(void));

#endif /* MCAL_MEXTI_MEXTI_INTERFACE_H_ */
