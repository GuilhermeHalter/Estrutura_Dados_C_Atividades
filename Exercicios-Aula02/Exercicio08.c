/*
8. Faça uma função que leia um texto e converta este texto para maiúscula.
O texto deve ser passado para função por referência.
*/

#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

void maiuscula(char *texto);

int main() {
    
    char texto[100];
    
    printf("Digite um Texto: ");
    scanf("%[^\n]s", texto);
    
    maiuscula(texto);
    
    printf("%s", texto);
 
    return 0;
}

void maiuscula(char *texto){
    while(*texto){
        *texto = toupper((unsigned char)*texto);
        texto++;
    }
}