/*
1. Construa um programa para calcular uma equação de segundo grau,
 onde x' e x'' deverão ser um ponteiro, imprima o valor de x'e x'' após a execução do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void equacao(float *x1, float *x2, float a, float b, float c);
 
int main(void){
    
    float X1, X2;
    equacao(&X1,&X2,2,3,-4);
    printf("X1 = %f, X2 = %f",X1,X2);
 
    return 0;
}

void equacao(float *x1, float *x2, float a, float b, float c){
    float delta = b * b - 4 * c * a;
        *x1 = ( - b + sqrt(delta)) / 2 * a;
        *x2 = ( - b - sqrt(delta)) / 2 * a;
}