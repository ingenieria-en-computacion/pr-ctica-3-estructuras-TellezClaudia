#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__
#include <stdio.h>
#include <math.h>

typedef struct complejo{
    float real;
    float imaginario;
}complejo;

float real(complejo*);
float imaginario(complejo*);
void asignaReal(complejo*, float);
void asignaImaginario(complejo*, float);
float modulo(complejo);
complejo Suma(complejo, complejo);


#endif