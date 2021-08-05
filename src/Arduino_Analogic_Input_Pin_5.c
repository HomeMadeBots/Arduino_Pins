#include "Arduino_Analogic_Input_Pin_5.h"


/*============================================================================*/
/* Provider_Ports (C/S) */
/*============================================================================*/
/* Pin:Analogic_Input_5 */
void Arduino_AIP5__Pin__Get_Voltage(
    const Arduino_Analogic_Input_Pin_5* me,
    T_Voltage_5* voltage )
{
    *voltage = analogRead( me->Arduino_Pin_Id );
}