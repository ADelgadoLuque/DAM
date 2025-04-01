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

	int i=0;
	for(i ; i<=100 ; i=i+2){
	printf("%d\n",i);
	}
	printf("Se terminó el bucle ñandejo ._.\n");

	/**
	 * 1) Inicializo i=0
	 * 2) Compruebo si i<5 Como se cumple, ejecuto el interior del bucle. 
	 * 3) printf
	 * 4) Terminando el interior del bucle, ejecuto el "código entre vueltas":i=i+1
	 * 5)Vuelvo al punto 2. Compruebo si i<5. Se cumple porque i==1. Ejecuto el interior
	 * 6)printf
	 **/


return 0;
}
