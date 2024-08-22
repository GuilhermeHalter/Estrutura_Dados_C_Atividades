/*
6. Faça uma função que receba como parâmetros por referência a linha, a coluna e uma mensagem,
esta função deve imprimir na tela a mensagem na posição solicitada. 
*/

#include <stdio.h>
#include <stdlib.h>

void imprimi_mensagem(int *linha, int *coluna, char *mensagem);

int main()
{
    int Linha, Coluna;
    char Mensagem[30];
    
    printf("Digite o numero da Linha: ");
    scanf("%i", &Linha);
    
    printf("Digite o numero da Coluna: ");
    scanf("%i", &Coluna);
    
    printf("Digite a frase: ");
    scanf(" %s", Mensagem);
    
    imprimi_mensagem(&Linha,&Coluna,Mensagem);

    return 0;
}

void imprimi_mensagem(int *linha, int *coluna, char *mensagem){
    
    for(int i = 0; i < *linha; i++){
        printf("\n");
    }
    for(int i = 0; i< *coluna; i++){
        printf(" ");
    }
    printf("%s", mensagem);
}


