#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero1 = 3;
    printf("Numero1 = P=%p C=%i\n", &numero1, numero1);
    int *numero2 = NULL;
    printf("Numero2 = P=%p C=\n", numero2);
    numero2 = &numero1;
    printf("Numero2 = P=%p C=%i\n", numero2, *numero2);

    return 0;
}