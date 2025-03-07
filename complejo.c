#include "complejo.h"
#include <stdio.h>
#include <math.h>

complejo numero_complejo(float real, float imaginario){
    complejo c;
    c.real= real
    c.imaginario= imaginario;
    return c;
}

void asignaReal(complejo* c, float real){
    c->real = real;
}

void asignaImaginario(complejo* c, float imaginario){
    c->real = imaginario;
}

float real(complejo* c){
    return c.real;
}

float imaginario(complejo* c){
    return c.imaginario;
}

float modulo(complejo c){
    return sqrt(c.real* c.real + c.imaginario* c.imaginario);
}

complejo Suma(complejo c1, complejo c2){
    return numero_complejo(c1.real+ c2.real, c1 imaginario+ c2.imaginario);
}