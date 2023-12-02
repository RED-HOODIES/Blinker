/*
 * File:        blinker.c
 * Author:      Oscar David Poblador Parra 20211005116  
 * INSTITUTION: Universidad Francisco José de Caldas
 *
 * Created on 28 de septiembre de 2023, 10:54 AM
 */


#include "Config.h"
#include "Setup.h"

void main (void){
   Setup_osc ();
   Setup_port ();
   Setup_interrup ();
   for  (;;)
   {
       LED^=1;                   // OR exclusiva (XOR)
       __delay_ms(500);         // Delay 500 ms
       
   }
}
