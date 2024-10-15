#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:16/10/2024
 *
 *	Título: Ejercicio de clase para los castigaos de la excursion
 */

int es_mayuscula(char letra){
	if (letra>=65&&letra<=90){
		return 1;
	}else if (letra>=97&&letra<=122){
		return 0;
	}else{
		printf("Carácter inválido");
	}
}

void calcular_factorial(){
	int num_factorial,factorial, n;	
	if (n!=1){
		n=1;
		printf("Introduce un número entero positivo: \n");
		scanf("%d",&num_factorial);
		calcular_factorial();
	}else if (num_factorial>=1){
	factorial= num_factorial*(num_factorial-1);
	calcular_factorial();
	}else{	
	printf("El factorial de %d es %d \n",num_factorial,factorial);
	}
}



int main() {
	int decision;
	printf("Selecciona una opción: \n\
			1. Verificar si un carácter es mayúscula. \n\
			2. Calcular el factorial de un número. \n\
			3. Encontrar el máximo de dos números. \n\
			4. Convertir grados Celsius a Farenheit. \n\
			5. Intercambiar dos números. \n\
			6. Calcular la potencia de un número. \n\
			7. Salir. \n");
	scanf("%d",&decision);

	switch (decision){
		case 1:
			char letra_main;

			printf("Introduce un carácter: \n");

			scanf(" %c",&letra_main);

			(es_mayuscula(letra_main)) ? printf("El carácter %c es mayúscula\n",letra_main) : printf("El carácter %c no es mayúscula\n",letra_main);
			break;

		case 2:
			calcular_factorial();		
			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:

			break;

		case 7:

			break;


		default:
			printf("Error");
			break;
	}

	return 0;
}
