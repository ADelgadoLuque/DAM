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
int i;
int num1=0;
int num2=1;
int siguiente;
for(i=1;i<=10;i++){
siguiente=num1+num2;
num1=num2;
num2=siguiente;
printf("%d \n",siguiente);
}


return 0;
}
