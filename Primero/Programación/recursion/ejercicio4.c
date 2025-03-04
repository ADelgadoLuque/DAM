#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */
int triangulo(int numero){


    if (numero!=1)
    {
        return triangulo(numero-1)+numero;
    }
    return numero;
    
}

int main() {
int numero;
printf("introduce el T: T");
scanf("%d",&numero);
printf("%d\n",triangulo(numero));

return 0;
}
