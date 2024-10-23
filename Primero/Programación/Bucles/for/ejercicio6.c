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
	int i,n;
	int resultado=0;
	printf("Introduce el número final de la serie\n");
		scanf("%d",&n);
	for(i=1;i<=n;i++){
		resultado=resultado+i;
		printf("%d ",resultado);
	}


	return 0;
}
