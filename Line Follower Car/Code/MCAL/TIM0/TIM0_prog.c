
#include "../../LIB/BIT_MATH.h" 
#include "../../LIB/STD_TYPE.h" 
#include "TIM0_interface.h" 
#include "TIM0_reg.h" 



void TIM0_voidOVCTCInit( u8 copy_u8mode){
	
	/* set prescaler */
	
	TCCR0_REG&=0b11111000 ;
	TCCR0_REG|=TIM0_PRESCALER ;
	
	
	 if (copy_u8mode==OV_MODE)
	 {
		  /* select mode */
		  
		  CLR_BIT(TCCR0_REG,3) ;
		  CLR_BIT(TCCR0_REG,6) ;
		  	
		  	/* enable  ov interrupt */
		  	SET_BIT(TIMSK_REG,0) ;
	 }
	  else if (copy_u8mode==CTC_MODE)
	  {
		   /* select mode */
		   
		   SET_BIT(TCCR0_REG,3) ;
		   CLR_BIT(TCCR0_REG,6) ;
		   
		   /* enable  CTC interrupt */
		   SET_BIT(TIMSK_REG,1) ;
		  
		  /*SET OCR VAL */
		  
		  OCR0_REG=OCR_VAL  ; 
	  }

}
