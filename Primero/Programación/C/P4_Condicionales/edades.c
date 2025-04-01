#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:2/10/24
 *
 *	Título: Clasificación de edades
 */

int main() {
	int edad;//inicializamos las variables
	printf("Introduzca su edad\n"); 
	scanf("%d",&edad);//asignamos valor a la variable edad
	if (edad<12){//usamos un condicional if para, en función de la edad introducida asignar un grupo de edad
		printf("Niño\n");
	}else if (edad>=12&&edad<=17){//podemos poner dos condiciones unidas por && indicando que ambas deben cumplirse para que el resultado sea true
		printf("Adolescente\n");
	}else if (edad>=18&&edad<=64){
		printf("Adulto\n");
	}else if (edad>=65){
		printf("Mayor\n");
	};

	return 0;
}
