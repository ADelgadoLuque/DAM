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
	int meta,contador=0,respuesta;
	printf("¿Hasta dónde quieres contar?\n");
	scanf("%d",&meta);
	do{	
		printf("¿Qué número va a continuación?\n");
		scanf("%d",&respuesta);
		contador++;
	}while (respuesta==contador&&contador!=meta+1);
	
	
	return 0;
}
