/*
 * File:        blinker.c
 * Author:      Oscar David Poblador Parra 20211005116  
 * INSTITUTION: Universidad Francisco José de Caldas
 *
 * Created on 28 de septiembre de 2023, 10:54 AM
 */

#include <xc.h>
#define _XTAL_FREQ 16000000

#define LED  LATDbits.LD7
#define tLED TRISDbits.TRISD7

#ifndef SETUP_H
#define	SETUP_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* SETUP_H */

void Setup_osc(void);        // Declaración configuración oscilador
void Setup_port(void);      // Declaración configuración puertos
void Setup_interrup(void); // Declaración configuración interrupciones
