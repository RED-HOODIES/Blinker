/*
 * File:        blinker.c
 * Author:      Oscar David Poblador Parra 20211005116  
 * INSTITUTION: Universidad Francisco José de Caldas
 *
 * Created on 28 de septiembre de 2023, 10:54 AM
 */

#include"Setup.h"


void Setup_osc (void)
{
    OSCCON=0b01110010;          //Oscilador intio7 oscilador interno 16MHz
    return ;
}
void Setup_interrup(void)
{
  return  ;
}
void Setup_port(void)
{
    LED =0;                   // Asegura borrar LATD 
    //TRISD =0b01111111;      // Habilita el RD7 como salida
    tLED=0;
    LED=0;                    // Carga 0 en LATD LD7
    return;
}

