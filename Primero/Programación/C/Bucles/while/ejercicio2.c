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
	int numero, suma = 0, digito;
	printf("Introduce un número de al menos dos dígitos\n");
	scanf("%d",&numero);
	while (numero>0){
		digito=numero%10;
		suma+=digito;
		numero=numero/10;
	
	}
	printf("%d\n",suma);
	return 0;
}
