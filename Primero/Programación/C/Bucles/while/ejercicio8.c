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
	int respuesta,suma=0,cantidad_numeros;
	printf("Introduce un número positivo\n");
	scanf("%d",&respuesta);
	while (respuesta%2==0){
		printf("número positivo\n");
		cantidad_numeros++;
		suma+=respuesta;
		scanf("%d",&respuesta);
	}
	printf("Número negativo\n Total= %d\n",suma/cantidad_numeros);
	return 0;
}
