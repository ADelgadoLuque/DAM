#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */


int main() {
    int x = 10;
    int *p;
    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor de p (dirección de x): %p\n", p);
    printf("Valor apuntado por p: %d\n", *p);

    return 0;
}


