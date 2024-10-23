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
	int longitud;
	int a=0;
	int b;
	int i;
	printf("Introduce la longitud del triángulo\n");
	scanf("%d",&longitud);

	for(a;a<longitud;a++){
		b=0;
		i=0;
		for(b;b<=a;b++){
			printf("%d",++i);
		}
		printf("\n");
	}


	return 0;
}
