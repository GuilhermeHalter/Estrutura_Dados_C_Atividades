/*
4. Faça um programa que peça um número para calcular o fatorial. 
Deve tem uma função para calcular o fatorial (por referência).
*/

#include <stdio.h>
#include <stdlib.h>

void fatorial(int *n);

int main()
{
    int numero;
    
    printf("Digite um numero:");
    scanf("%i",&numero);
    
    fatorial(&numero);
    
    return 0;
}

void fatorial(int *n){
    int fat;
    
    for(fat = 1; *n > 1; *n = *n - 1){
      fat = fat * *n;
    }

  printf("\n%d", fat);

}
