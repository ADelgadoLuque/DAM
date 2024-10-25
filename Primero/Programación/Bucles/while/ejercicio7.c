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
	int respuesta,suma=0;
	printf("Introduce un número par\n");
	scanf("%d",&respuesta);
	while (respuesta%2==0){
		printf("número par\n");
		suma+=respuesta;
		scanf("%d",&respuesta);
	}
	printf("Número impar\n Total= %d\n",suma);
	return 0;
}
