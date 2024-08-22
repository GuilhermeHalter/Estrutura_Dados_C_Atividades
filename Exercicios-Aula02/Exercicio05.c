/*
5. Faça um programa para colocar três números em ordem crescente.
Deve ter uma função para fazer a troca dos valores, 
use uma função usando passagem de parâmetro por referência.
*/

#include <stdio.h>
#include <stdlib.h>

void ordenar(int *a, int *b, int *c);

int main()
{
    int n1, n2, n3;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    printf("Digite outrp numero: ");
    scanf("%i", &n2);
    
    printf("Digite o ultimo numero: ");
    scanf("%i", &n3);
    
    ordenar(&n1,&n2,&n3);

    return 0;
}

void ordenar(int *a, int *b, int *c){
    if (*a > *c) {
        int tmp = *c;
        *c = *a;
        *a = tmp;
    }
    if (*a > *b) {
        int tmp = *b;
       *b = *a;
        *a = tmp;
    }
    if (*b > *c) {
        int tmp = *c;
        *c = *b;
        *b = tmp;
    }
    printf("%d %d %d", *a, *b, *c);
}