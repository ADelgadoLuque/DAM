#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:22/10/2024
 *
 *	Título:Ejercicio 1 prácticas con cadenas de caracteres
 */

int main() {
	char str1[5];
	int longitud;
	char reemplazo;
	
	printf("Introduzca una palabra: \n");
	
	scanf("%s",str1);//recoge el valor de la cadena de caracteres
	
	printf("¿Qué longitud tiene la palabra? \n");
	
	scanf("%d",&longitud);//recoge la longitud
	
	printf("¿Con qué carácter quieres reemplazar ?");
	
	scanf(" %c",&reemplazo);//recoge el reemplazo de \0
	
	printf("Antes\n %s \n",str1);

	str1[longitud]=reemplazo;//asignamos el reemplazo al valor de longitud para reemplazar \0 y ver que ocurre	
	printf("Después\n %s \n",str1);
	
	return 0;
}
