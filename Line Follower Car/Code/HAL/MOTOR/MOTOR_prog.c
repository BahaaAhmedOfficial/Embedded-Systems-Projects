

#include "../../LIB/BIT_MATH.h" 
#include "../../LIB/STD_TYPE.h" 
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIM1/TIM1_interface.h"
#include "MOTOR_reg.h" 
#include "MOTOR_interface.h" 


void MOTOR_voidForward(u8 speed){
	   /* SET PINS DIR  */
	   DIO_voidSetPinDir(EN1_PORT,EN1_PIN,OUTPUT) ; 
	   DIO_voidSetPinDir(EN2_PORT,EN2_PIN,OUTPUT) ; 
	   DIO_voidSetPinDir(IN1_PORT,IN1_PIN,OUTPUT) ; 
	   DIO_voidSetPinDir(IN2_PORT,IN2_PIN,OUTPUT) ; 
	   DIO_voidSetPinDir(IN3_PORT,IN3_PIN,OUTPUT) ; 
	   DIO_voidSetPinDir(IN4_PORT,IN4_PIN,OUTPUT) ; 
	
	    /* MOTOR Forward */
		 TIMER1_Vid_FastPWM_10bit_res(OC1A,speed) ;
		 TIMER1_Vid_FastPWM_10bit_res(OC1B,speed) ;
		DIO_voidSetPinVal(IN1_PORT,IN1_PIN,HIGH) ; 
		DIO_voidSetPinVal(IN2_PORT,IN2_PIN,LOW) ; 
		DIO_voidSetPinVal(IN3_PORT,IN3_PIN,HIGH) ; 
		DIO_voidSetPinVal(IN4_PORT,IN4_PIN,LOW) ; 
	
}
void MOTOR_voidRevers( u8 speed){
	
	  /* SET PINS DIR  */
	   DIO_voidSetPinDir(EN1_PORT,EN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(EN2_PORT,EN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN1_PORT,IN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN2_PORT,IN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN3_PORT,IN3_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN4_PORT,IN4_PIN,OUTPUT) ;
	  
	  /* MOTOR Forward */
	  TIMER1_Vid_FastPWM_10bit_res(OC1A,speed) ;
	  TIMER1_Vid_FastPWM_10bit_res(OC1B,speed) ;
	  DIO_voidSetPinVal(IN1_PORT,IN1_PIN,LOW) ;
	  DIO_voidSetPinVal(IN2_PORT,IN2_PIN,HIGH) ;
	  DIO_voidSetPinVal(IN3_PORT,IN3_PIN,LOW) ;
	  DIO_voidSetPinVal(IN4_PORT,IN4_PIN,HIGH) ;
}
void MOTOR_voidRight( u8 speed){
	  /* SET PINS DIR  */
	   DIO_voidSetPinDir(EN1_PORT,EN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(EN2_PORT,EN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN1_PORT,IN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN2_PORT,IN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN3_PORT,IN3_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN4_PORT,IN4_PIN,OUTPUT) ;
	  
	  /* MOTOR Forward */
	   TIMER1_Vid_FastPWM_10bit_res(OC1A,speed) ;
	   TIMER1_Vid_FastPWM_10bit_res(OC1B,speed) ;
	  DIO_voidSetPinVal(IN1_PORT,IN1_PIN,LOW) ;
	  DIO_voidSetPinVal(IN2_PORT,IN2_PIN,HIGH) ;
	  DIO_voidSetPinVal(IN3_PORT,IN3_PIN,HIGH) ;
	  DIO_voidSetPinVal(IN4_PORT,IN4_PIN,LOW) ;
	
	
}
void MOTOR_voidLeft( u8 speed){
	  /* SET PINS DIR  */
	   DIO_voidSetPinDir(EN1_PORT,EN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(EN2_PORT,EN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN1_PORT,IN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN2_PORT,IN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN3_PORT,IN3_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN4_PORT,IN4_PIN,OUTPUT) ;
	  
	  /* MOTOR Forward */
	   TIMER1_Vid_FastPWM_10bit_res(OC1A,speed) ;
	   TIMER1_Vid_FastPWM_10bit_res(OC1B,speed) ;
	  DIO_voidSetPinVal(IN1_PORT,IN1_PIN,HIGH) ;
	  DIO_voidSetPinVal(IN2_PORT,IN2_PIN,LOW) ;
	  DIO_voidSetPinVal(IN3_PORT,IN3_PIN,LOW) ;
	  DIO_voidSetPinVal(IN4_PORT,IN4_PIN,HIGH) ;
}
void MOTOR_voidStop( u8 speed){
	  /* SET PINS DIR  */
	   DIO_voidSetPinDir(EN1_PORT,EN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(EN2_PORT,EN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN1_PORT,IN1_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN2_PORT,IN2_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN3_PORT,IN3_PIN,OUTPUT) ;
	   DIO_voidSetPinDir(IN4_PORT,IN4_PIN,OUTPUT) ;
	  
	  /* MOTOR Forward */
	  TIMER1_Vid_FastPWM_10bit_res(OC1A,speed) ;
	  TIMER1_Vid_FastPWM_10bit_res(OC1B,speed) ;
	  DIO_voidSetPinVal(IN1_PORT,IN1_PIN,LOW) ;
	  DIO_voidSetPinVal(IN2_PORT,IN2_PIN,LOW) ;
	  DIO_voidSetPinVal(IN3_PORT,IN3_PIN,LOW) ;
	  DIO_voidSetPinVal(IN4_PORT,IN4_PIN,LOW) ;
}