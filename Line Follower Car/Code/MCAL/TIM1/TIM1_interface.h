

#ifndef TIMER1_INTERFACE_H_
#define TIMER1_INTERFACE_H_

#define  OC1A     0 
#define  OC1B     1

void TIMER1_Vid_FastPWM_ICR_Init() ; 
void TIMER1_Vid_SetOcrVal(u32 val) ; 

void TIMER1_Vid_FastPWM_10bit_res(u8 copy_u8_pin , u8 copy_u8_duty) ; 


#endif /* TIMER1_INTERFACE_H_ */