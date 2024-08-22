/*
2. Construa um programa para calcular a área e de um círculo,
a área deve ser do tipo de ponteiro 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void){
    
    float *Area;
    float area, pi, raio;
    
    pi= 3.1415;
    raio= 5;
    
    area = pi * pow(raio,2);
    
    Area = &area;
    
    printf("A area do circulo eh %f", *Area);
 
    return 0;
}
