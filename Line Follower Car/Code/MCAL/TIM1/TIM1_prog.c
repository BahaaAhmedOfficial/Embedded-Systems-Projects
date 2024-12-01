
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "TIM1_interface.h"
#include "TIM1_reg.h"

void TIMER1_Vid_FastPWM_ICR_Init(){
	
	/* Fast PWM --> OCA1  (non inverting) */
	SET_BIT(TCCR1A_REG,7) ; 
	CLR_BIT(TCCR1A_REG,6) ; 
	/* FaST PWM ICR */
	CLR_BIT(TCCR1A_REG,0) ; 
	SET_BIT(TCCR1A_REG,1) ; 
	SET_BIT(TCCR1B_REG,3) ; 
	SET_BIT(TCCR1B_REG,4) ;
	
	ICR_REG=40000 ; 
	//OCR1A_REG=2000 ; 
	/* prescaler 8 */
	CLR_BIT(TCCR1B_REG,0) ; 
	SET_BIT(TCCR1B_REG,1) ; 
	CLR_BIT(TCCR1B_REG,2) ; 
	
}
void TIMER1_Vid_SetOcrVal(u32 val){
	
	OCR1A_REG=val ; 
}

void TIMER1_Vid_FastPWM_10bit_res(u8 copy_u8_pin , u8 copy_u8_duty){
	
	/* select fast pwm 10bit resolution  */
	    SET_BIT(TCCR1A_REG,0) ; 
	    SET_BIT(TCCR1A_REG,1) ; 
		SET_BIT(TCCR1B_REG,3) ;
		CLR_BIT(TCCR1B_REG,4) ; 
   /* select prescaler : 8 */		
	CLR_BIT(TCCR1B_REG,0) ;
	SET_BIT(TCCR1B_REG,1) ;
	CLR_BIT(TCCR1B_REG,2) ;
	switch(copy_u8_pin){
		
		case OC1A:   
		           /* FAST PWM non inverting mode */
				   SET_BIT(TCCR1A_REG,7) ; 
				   CLR_BIT(TCCR1A_REG,6) ; 
				   OCR1A_REG=(f32)copy_u8_duty * 10.23 ;
				   break ;  
		case OC1B: 
		        /* FAST PWM non inverting mode */
		        SET_BIT(TCCR1A_REG,5) ;
		        CLR_BIT(TCCR1A_REG,4) ;
		        OCR1B_REG=(f32)copy_u8_duty * 10.23 ;
				break ; 
	}
	
	
}