/*
3. Construa um programa que contém duas variáveis inteiras, e cada uma destas variáveis deverá ter um valor atribuído nelas, 
através de uma entrada de dado do usuário. Também elaborem no mesmo programa três funções,
que deveram usar o conceito de ponteiro para manipular a passagem dos dados para as funções. 
As funções deverão ter as seguintes funcionalidades: a soma das duas variáveis, 
a diferença entre as duas variáveis e a multiplicação das duas variáveis.
*/

#include <stdio.h>
#include <stdlib.h>

void somar(int *a, int *b);
void diferenca(int *a, int *b);
void multiplicacao(int *a, int *b);

int main()
{
    int A,B;
    
    printf("Digite o valor de A: ");
    scanf("%i", &A);
    printf("Digite o valor de B: ");
    scanf("%i", &B);
    
    somar(&A,&B);
    diferenca(&A, &B);
    multiplicacao(&A,&B);
    
    return 0;
}

void somar(int *a, int *b){
    printf("A soma de A e B eh de %i\n", *a + *b);
}

void diferenca(int *a, int *b){
    printf("A diferenca dos numeros eh de %i\n", *a - *b);
}

void multiplicacao(int *a, int *b){
    printf("A multiplicacao dos numeros eh de %i\n", *a * *b);
}