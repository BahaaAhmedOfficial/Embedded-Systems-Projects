
#ifndef TIM0_INTERFACE_H_
#define TIM0_INTERFACE_H_



/* TIM0  prescaler */
/*select timer0 prescaler */
#define  NO_PRESCALER         1 
#define _8_PRESCALER          2 
#define _64_PRESCALER         3
#define _256_PRESCALER        4
#define _1024_PRESCALER       5 


#define  TIM0_PRESCALER      _64_PRESCALER


/* timer0 mode */
#define  OV_MODE      0 
#define  CTC_MODE     1 

/* OCR VAL */

#define  OCR_VAL    250

void TIM0_voidOVCTCInit( u8 copy_u8mode) ; 



#endif /* TIM0_INTERFACE_H_ */