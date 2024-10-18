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
	char str1[100]= "hola";
	int posicion;
	char reemplazo;
	printf("Introduzca una palabra: \n");
	scanf("%s",str1);
	printf("¿qué posición desea modificar? \n",str1);
	scanf("%d",&posicion);
	printf("¿qué carácter desea poner? \n",str1);
	scanf(" %c",&reemplazo);
	str1[posicion-1]=reemplazo;
	printf("La nueva palabra es %s\n",str1);
return 0;
}
