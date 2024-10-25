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
	int respuesta;
	printf("Introduce un número\n");
	scanf("%d",&respuesta);
	while (respuesta>=0){
		printf("número positivo\n");
		scanf("%d",&respuesta);
	}
	printf("número negativo\n");
	return 0;
}
