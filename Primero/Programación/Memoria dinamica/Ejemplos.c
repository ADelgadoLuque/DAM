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
//Declara un array con tres elementos
int * arr= (int*) malloc(3*sizeof(int));

 if (arr == NULL)
 {
 	printf("Error fatal: Memoria insuficiente\n");
 	return 1;
 }
//Inicializa los valores del array con los numeros 1 3 5

	arr[0]=1;
	arr[1]=3;
	arr[2]=5;

arr = (int *) realloc(arr,5*sizeof(int));
if (arr == NULL)
 {
 	free(arr);
 	printf("Error fatal: Memoria insuficientepara redimensionar\n");
 	return 1;
 }

 arr[3]=7;
 arr[4]=9;

for (int i = 0; i < 5; ++i)
{
	printf("arr[%d]: %d \n",i,arr[i]);
}




free(arr);
return 0;
}
