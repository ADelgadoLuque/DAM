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
	int numero, contador = 0; 
	printf("Introduce un número de al menos dos dígitos\n");
	scanf("%d",&numero);
	while (numero>0){
		contador++;
		numero=numero/10;
	
	}
	printf("%d\n",contador);
	return 0;
}
