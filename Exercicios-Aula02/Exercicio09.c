/*
9. Faça uma função que calcule a média de uma sequência de valores,
os valores deverão ser passados por meio de um vetor de referência.
*/

#include <stdio.h>
#include <stdio.h>

void media(int *vetor[3], int tamanho);

int main(void) {
    
    int valor1, valor2, valor3;  
    int *vetor[3];  

    vetor[0] = &valor1;
    vetor[1] = &valor2;
    vetor[2] = &valor3;
    
    for (int i = 0; i < 3; i++) {
        printf("Digite o %iº numero: ", i + 1);
        scanf("%i", vetor[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Valor no vetor[%d] = %d\n", i, *vetor[i]);
    }
    
    media(vetor, 3);
 
    return 0;
}

void media(int *vetor[], int tamanho) {
    float mediaValores = 0;

    for (int i = 0; i < tamanho; i++) {
        mediaValores += *vetor[i];
    }

    mediaValores /= tamanho;

    printf("Média: %.2f\n", mediaValores);
}
