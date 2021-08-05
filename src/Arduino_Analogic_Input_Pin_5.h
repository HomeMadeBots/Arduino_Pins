#ifndef ARDUINO_ANALOGIC_INPUT_PIN_5_H
#define ARDUINO_ANALOGIC_INPUT_PIN_5_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>
#include "Arduino.h" /* pin ID */


/* Realized interfaces */
#include "Analogic_Input_5.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameters */
    uint8_t Arduino_Pin_Id;

} Arduino_Analogic_Input_Pin_5;


/*============================================================================*/
/* Provider_Ports (C/S) */
/*============================================================================*/
/* Pin:Analogic_Input_5 */
void Arduino_AIP5__Pin__Get_Voltage( 
    const Arduino_Analogic_Input_Pin_5* me,
    T_Voltage_5* voltage );


#endif