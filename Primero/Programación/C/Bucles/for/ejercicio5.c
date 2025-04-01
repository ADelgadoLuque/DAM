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
	int i,factorial;
	int resultado=1;
	printf("introduce el numero\n");
	scanf("%d",&factorial);
	i=factorial;
	for(i;i>1;i--){
		resultado=resultado*i;
	}

	printf("%d! = %d \n",factorial,resultado);

	return 0;
}
