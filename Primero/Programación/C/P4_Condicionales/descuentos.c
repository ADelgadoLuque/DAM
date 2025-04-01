#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:2/10/24
 *
 *	Título:Calculadora de descuentos
 */

int main() {
	float total;//inicializamos las funciones
	char rol;
	printf("Indroduce tu rol\nE si eres estudiante\nP si eres profesor\nO para otros\n");
	scanf("%c",&rol);//recogemos los valores necesarios y los almacenamos en las variables correspondientes
	printf("introduce el total de tu compra\n");
	scanf("%f",&total);//vamos a usar un condicional if para comprobar el rol y aplicar el descuento correspondiente usando el valor de la variable rol como condición
	if (rol== 'E'|| rol == 'e'){
		printf("El total de tu compra es de %f\n",total*0.85);
	}else if (rol == 'P'|| rol== 'p'){
		printf("El total de tu compra es de %f\n",total*0.9);
	}else if (rol == 'O'|| rol== 'o'){
		printf("El total de tu compra es de %f\n",total);
	}else{printf("Error\n");}//en caso de que el valor de la variable rol no sea ninguno de los establecidos como condiciones se muestra un mensaje de error
	return 0;
}
