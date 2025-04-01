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
/*CREA UN PROGRAMA QUE PIDA POR PANTALLA UN NUMERO ENTERO Y CREE UN ARRAY DE ENTEROS DE ESE TAMAÑO INICIALIZANDO CON LOS NUMEROS PARES e imprimelo*/
	int tamanio;
	printf("Introduce el tamaño del array\n");
	scanf("%d",&tamanio);

	int * arr= (int *) calloc(tamanio,sizeof(int));
	if (arr==NULL)
	{
		printf("error\n");
		return 1;
	}
	for (int i = 0; i < tamanio; ++i)
	{
		arr[i]=i*2 ;
		printf("arr[%d]: %d\n",i,arr[i]);
	}

/*MODIFICA EL PUNTERO PARA QUE SEA UN ARRAY EL DOBLE DE GRANDE Y EN LA SEGUNDA PARTE SE GUARDEN LOS IMPARES*/

	arr= (int *) realloc(arr,(tamanio*2)*sizeof(int));
	if (arr==NULL)
	{
		free(arr);
		printf("error redimension\n");
		return 1;
	}
	for (int i = tamanio,j=0; i <tamanio*2 ; ++i,j++)
	{
		arr[i]= j*2+1;
		printf("arr[%d]: %d\n",i,arr[i]);
	}

	free(arr);
	return 0;
}
