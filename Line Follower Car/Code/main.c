#include <avr/io.h>
#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPE.h"

#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/DIO/DIO_reg.h"

#include "MCAL/TIM1/TIM1_interface.h"
#include "MCAL/TIM1/TIM1_reg.h"

#include "HAL/MOTOR/MOTOR_interface.h"
#include "HAL/MOTOR/MOTOR_reg.h"

int main(void)
{
    DIO_voidSetPinDir(DIO_PORTA, DIO_PIN0, INPUT);
    DIO_voidSetPinDir(DIO_PORTA, DIO_PIN1, INPUT);

    while (1)
    {
        if (GET_BIT(DIO_PORTA, DIO_PIN0) == 0 && GET_BIT(DIO_PORTA, DIO_PIN1) == 0) // Move Forward
        {
            MOTOR_voidForward(80);
        }
        else if (GET_BIT(DIO_PORTA, DIO_PIN0) == 1 && GET_BIT(DIO_PORTA, DIO_PIN1) == 0) // Move Right
        {
            MOTOR_voidRight(80);
        }
        else if (GET_BIT(DIO_PORTA, DIO_PIN0) == 0 && GET_BIT(DIO_PORTA, DIO_PIN1) == 1) // Move Left
        {
            MOTOR_voidLeft(80);
        }
        else if (GET_BIT(DIO_PORTA, DIO_PIN0) == 1 && GET_BIT(DIO_PORTA, DIO_PIN1) == 1) // Stop
        {
            MOTOR_voidStop(0);
        }
    }
}
