#include <stdio.h>
#include <stdlib.h>

void soma(int *n); // void soma(int n[]);

int main(void){
	int numeros[10];
	for(int i=0;i<10;i++) numeros[i]=i+1;
	for(int i=0;i<10;i++) printf("%i, ",numeros[i]);
	printf("\n");
	soma(numeros);
	for(int i=0;i<10;i++) printf("%i, ",numeros[i]);
	
	return 0;
}

void soma(int *n){
	for(int i=0;i<10;i++) n[i]+=10;
}