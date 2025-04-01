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
	int lado,horizontal,vertical;
	printf("Introduce el lado del cuadrado");
	scanf("%d",&lado);
		horizontal=lado;
		vertical=lado;
	for(vertical;vertical>0;vertical--){
		horizontal=lado;
		for(horizontal;horizontal>0;horizontal--){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
