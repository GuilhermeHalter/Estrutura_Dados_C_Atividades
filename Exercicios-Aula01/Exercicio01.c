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

Pessoa entrada(void);
void imprimir(Pessoa valor);

int main(void) {
    Pessoa valor;
    
    valor = entrada();
    
    imprimir(valor);
    return 0;
}

Pessoa entrada (void){
    Pessoa valor;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s", valor.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &valor.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &valor.altura);
    
    return valor;
}

void imprimir(Pessoa valor){
    printf("nome: %s \tidade: %d \taltura: %f", valor.nome, valor.idade, valor.altura);
}


