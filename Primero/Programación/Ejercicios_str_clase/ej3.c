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
	char str1[4];
	char str2[4];
	scanf("%s",str1);
	scanf("%s",str2);
	if (str1==str2){
		printf("str1==str2\n");
	}else if (str1!=str2){
		printf("str1!=str2\n");
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
	for (int i=0;i<=50;i++){
		if (str1[i]==str2[i]){
			printf("%c",str1[i]);
		}else{break;
		}
	}
	printf("\n");


	return 0;
}
