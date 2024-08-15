/*
1. Construa um programa que define uma estrutura de tipo pessoa, depois, 
solicite inserção de dados para a estrutura de tipo pessoa e agora imprime a estrutura tipo pessoa.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
    char nome[30];
    int idade;
    float altura;
} Pessoa;

int main(void) {
    Pessoa a1;

    printf("Digite o nome da pessoa: ");
    scanf("%s", a1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &a1.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &a1.altura);

    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Altura: %.2f\n", a1.altura);

    return 0;
}
