# Estrutura de Dados

### O que é ponteiro
- tipo de variavel que referencia um area de memoria
- Como declaro um ponteiro com: *
```cpp
  int *variavel
```

**Exemplo com numeros:**
```cpp
  int *variavel

  printf("%i", &variavel); // mostrar o endereço de memoria do ponteiro.
  printf("%i", variavel);  // mostrar o endereço de memoria da variavel atribuida ao ponteiro.
  printf("%i", *variavel); // mostrar o valor da variavel atribuida ao ponteiro.
```
**Exemplo com char:**
```cpp
char texto[100];
char *teste;
    
printf("Digite um Texto: ");
scanf("%[^\n]s", texto); // se usar "&" no 'texto'aparecerá um warning
    
teste = texto; // se usar "&" no 'texto'aparecerá um warning
    
printf("%s", teste); // se usar "&" e "*" no 'teste'aparecerá um warning
 
```
