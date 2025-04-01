#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:2/10/24
 *
 *	Título:Par o Impar
 */

int main() {
	int numero;//inicializamos la variable
	printf("introduce un numero\n");
	scanf("%d",&numero);//recogemos el valor y se lo asignamos a la variable número
	if (numero % 2){//como el resultado de la condición es 0 o 1 no hace falta igualar a nada ya que 0==false y 1==true.
		//para ver si el número es par o impar cogemos el resto de dividir el número entre 2. si el resultado es 1 es impar y si es 0 es par.
		printf("impar\n");//
	}else{
		printf("par\n");
	}
		return 0;
	}
