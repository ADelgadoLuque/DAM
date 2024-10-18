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
	char str1[4]= "hola";
	printf("%s\n",str1);//imprime el string entero

	printf("%c\n",str1[3]);//imprime el caracter en la posición 3 (Empieza en el 0)

	// str1[4]= '$'; 	// \0 es el indicador de final de string en C. Reemplazarlo es muy MALA idea
	
	printf("%s\n",str1);
return 0;
}
