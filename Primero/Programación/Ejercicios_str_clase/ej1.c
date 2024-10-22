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
	char str1[100];
	int posicion;
	char reemplazo;
	printf("Introduzca una palabra: \n");
	scanf("%s",str1);//recoge el valor de la cadena
	printf("¿qué posición desea cambiar? \n");
	scanf("%d",&posicion);//recoge la posición a cambiar
	printf("¿qué carácter desea poner? \n");
	scanf(" %c",&reemplazo);//recoge el carácter que reemplaza al original
	str1[posicion-1]=reemplazo;//asignamos el reemplazo al valor de la posición-1 ya que al pedir la posición no tenemos en cuenta que se empieza desde 0 (la posición 4 realmente es el valor 3 de la str.
	printf("La nueva palabra es %s\n",str1);//printeamos el resultado
return 0;
}
