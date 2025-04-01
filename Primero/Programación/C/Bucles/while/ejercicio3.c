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
		suma=suma+digito;
		suma*=10;
		numero=numero/10;
	
	}
	suma/=10;//El último ciclo del bucle multiplica x10 añadiendo un 0 que no debería estar, con esto lo quitamos
	printf("%d\n",suma);
	return 0;
}
