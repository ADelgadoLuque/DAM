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
char str1[20]="a b c d";
int longitud=20;

fgets(str1,longitud, stdin);
printf("%s",str1);
return 0;
}
