/*
 * TIM_int.h
 *
 *  Created on: ??�/??�/????
 *      Author: Amira Abdel Wanis
 */

#ifndef TIM_INT_H_
#define TIM_INT_H_
typedef enum{
	TIMER0_STOP=0,
	TIMER0_SCALER_1,
	TIMER0_SCALER_8,
	TIMER0_SCALER_64,
	TIMER0_SCALER_256,
	TIMER0_SCALER_1024,
	EXTERNALl_FALLING,
	EXTERNAL_RISING
}Timer0Scaler_type;

typedef enum
{
	TIMER0_NORMAL_MODE=0,
	TIMER0_PHASECORRECT_MODE,
	TIMER0_CTC_MODE,
	TIMER0_FASTPWM_MODE

}Timer0Mode_type;
typedef enum
{
	OCO_DISCONNECTED=0,
	OCO_TOGGLE,
	OCO_NON_INVERTING,
	OCO_INVERTING

}OC0Mode_type;
typedef enum
{
	CSOO=0,
	CS01,
	CS02,
	WGM01,
	COM00,
	COM01,
	WGM00,
	FOC0
}TCCR0_BITS;

#define TOIE0 0
#define OCIE0 1


#endif /* TIM_INT_H_ */
