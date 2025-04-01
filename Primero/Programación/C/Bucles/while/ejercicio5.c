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
	while (respuesta!=77){
		printf("número incorrecto, prueba otra vez\n");
		scanf("%d",&respuesta);
	}
	printf("acertaste!\n");
	return 0;
}
