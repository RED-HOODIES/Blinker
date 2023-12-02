/*
 * File:        blinker.c
 * Author:      Oscar David Poblador Parra 20211005116  
 * INSTITUTION: Universidad Francisco José de Caldas
 *
 * Created on 28 de septiembre de 2023, 11:55 AM
 */


#include <xc.h>
#include <avr/io.h>
void main(void) { DDRB=0xFF;
    while(1){PORTB++;
    long i; for (i=0; i<0x7FFF; i++){;}}
    return;
}
