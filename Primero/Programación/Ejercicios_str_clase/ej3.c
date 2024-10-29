#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha: 22/10/2024
 *
 *	Título: Ejercicio 3 Cadenas de Caracteres
 */

int main() {
	char str2[8];
	char str1[8];
	char str3[8];
	scanf(" %s",str1);
	scanf(" %s",str2);
	if (str1==str2){
		printf("str1==str2\n");
	}else if (str1!=str2){
		printf("str1!=str2\n");//Siempre van a ser distintas incluso si tienen la misma palabra ya que lo que se compara es la dirección de memoria de inicio de la cadena la cual no es igual
	}else{
		printf("error1\n");
	}
	if (str1>str2){
		printf("str1>str2\n");
	}else if (str1<str2){
		printf("str1<str2\n");
	}else{
		printf("error2\n");
	}
	for (int i=0;i<8;i++){
		if (str1[i]==str2[i]){
			printf("%c",str1[i]);
		}else{
			break;
		}
	}
	printf("\n");
	str3=str1;
	printf("%s\n",str3);

	return 0;
}
