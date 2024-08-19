/*
3. Construa um programa que define uma estrutura de peça, 
que poderá ser usado para outros programas, deverá conter atributos como:
código, nome, cor, peso, preço. Também uma função entrada de dados e uma função de saídas de dados. 
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pecas {
    int codigo;
    char nome[30];
    char cor[30];
    float peso, preco;
} Pecas;

Pecas entrada(void);
void imprimir(Pecas valor);

int main()
{
    Pecas valor;
    
    valor = entrada();
    
    imprimir(valor);

    return 0;
}

Pecas entrada(void){
    Pecas valor;
    
    printf("Digite o codigo: ");
    scanf("%i", &valor.codigo);
    
    printf("Digite a nome: ");
    scanf("%s", valor.nome);
        
    printf("Digite a cor: ");
    scanf("%s", valor.cor);
    
    printf("Digite o peso: ");
    scanf("%f", &valor.peso);
    
    printf("Digite o preco: ");
    scanf("%f", &valor.preco);
    
    return valor;
}

void imprimir(Pecas valor){
    printf("Codigo: %i \tNome: %s \tCor: %s \tPeso: %.1fg \tPreco: R$%.2f \n", valor.codigo, valor.nome, valor.cor, valor.peso, valor.preco);
}