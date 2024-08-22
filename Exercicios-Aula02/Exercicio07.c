/* 
7. Faça uma função que leia um nome, converta o primeiro caractere deste nome para maiúscula. 
O nome deve ser passado para função por referência.
*/

#include <stdio.h>
#include <ctype.h>  

void maiuscula(char *mensagem);

int main() {
    char Mensagem[30];
    
    printf("Digite a Mensagem: ");
    scanf("%29s", Mensagem);  
    
    maiuscula(Mensagem);
    
    printf("%s\n", Mensagem);
    
    return 0;
}

void maiuscula(char *mensagem) {
    if (mensagem[0] != '\0') {  
        mensagem[0] = toupper((unsigned char)mensagem[0]);  
    }
}





