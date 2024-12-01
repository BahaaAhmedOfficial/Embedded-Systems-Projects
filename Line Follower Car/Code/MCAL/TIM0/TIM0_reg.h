

#ifndef TIM0_REG_H_
#define TIM0_REG_H_

#define TCCR0_REG    *((volatile u8*)0x53)
#define TIMSK_REG    *((volatile u8*)0x59)
#define TCNT0_REG    *((volatile u8*)0x52)
#define TIFR_REG     *((volatile u8*)0x58)
#define OCR0_REG     *((volatile u8*)0x5C)


#endif /* TIM0_REG_H_ */