#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct animal {
    char raca[30];
    char cor[20];
    char sexo[20];
    float peso;
} Animal;

Animal entrada(void);
void imprimir(Animal valor);

int main(void) {
    Animal bd[10];
    
    for (int i = 0; i < 10; i++) {
        bd[i] = entrada();
        system("cls");
    }
    
    for(int i = 0; i < 10; i++) {
        imprimir(bd[i]);
    }
    
    return 0;
}

Animal entrada(void) {
    Animal valor;
    
    printf("Digite a raça: ");
    scanf("%s", valor.raca);
    printf("Digite a cor: ");
    scanf("%s", valor.cor);

    // Validação para o sexo
    while (1) {
        printf("Digite o sexo (male/female): ");
        scanf("%s", valor.sexo);

        if (strcmp(valor.sexo, "male") == 0 || strcmp(valor.sexo, "female") == 0) {
            break;
        } else {
            printf("Sexo inválido. Por favor, digite 'male' ou 'female'.\n");
        }
    }
    
    printf("Digite o peso: ");
    scanf("%f", &valor.peso);
    
    return valor;
}

void imprimir(Animal valor) {
    printf("Raca: %s \tCor: %s \tSexo: %s \tPeso: %.2f \n", valor.raca, valor.cor, valor.sexo, valor.peso);
}
