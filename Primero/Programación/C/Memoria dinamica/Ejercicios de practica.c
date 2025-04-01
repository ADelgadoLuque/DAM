#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título: Ejercicios de memoria dinamica
 */


struct ejercicio11{
int num_11;
float float_11;
};

int main() {
	int ejercicio;


	do{
		printf("EJERCICIO\n");
		scanf("%d",&ejercicio);
		switch(ejercicio){

		case 6:
/*EJERCICIO 6*/
			int tamanio_6;
			printf("EJERCICIO 6\n");
			printf("Tamaño del array\n");
			scanf("%d",&tamanio_6);

			int * arr_6= (int *) calloc(tamanio_6,(sizeof(int)));
			
			if (arr_6==NULL)
			{
				printf("Error Fatal\n");
				return 1;
			}

			for (int i = 0; i < tamanio_6; ++i)
			{
				printf("Introduce un número\n");
				scanf("%d",&arr_6[i]);
			}
			for (int i = 0; i < tamanio_6; ++i)
			{
				printf("arr[%d]: %d\n",i,arr_6[i]);
			}
			free(arr_6);
			break;

		case 7:
/*EJERCICIO 7*/
			int tamanio_7;
			printf("EJERCICIO 7\n");
			printf("Introduce el tamaño de la cadena\n");
			scanf("%d",&tamanio_7);
			char * str_7= (char *) malloc((tamanio_7+1)*sizeof(char));
			if (str_7==NULL)
			{
				printf("Error Fatal\n");
				return 1;
			}

			printf("Introduce la cadena de caracteres\n");
			scanf("%s",str_7);

			printf("%s\n",str_7);
			free(str_7);
			break;
		
		case 8:
/*EJERCICIO 8*/
			int tamanio_8;
			printf("EJERCICIO 8\n");
			printf("Introduce el tamaño del array\n");
			scanf("%d",&tamanio_8);
			int * arr_8= (int *) malloc(tamanio_8*sizeof(int));
			if (arr_8==NULL)
			{
				printf("Error Fatal\n");
				return 1;
			}

			for (int i = 0; i < tamanio_8; ++i)
			{
				arr_8[i]=i;
			}
			for (int i = 0; i < tamanio_8; ++i)
			{
				printf("arr[%d]: %d\n",i,arr_8[i] );
			}
			printf("Introduce el nuevo tamaño\n");
			int tamanio_8_nuevo;
			scanf("%d",&tamanio_8_nuevo);
			arr_8= (int *)realloc(arr_8,tamanio_8_nuevo*sizeof(int));
			if (arr_8==NULL)
			{
				printf("Error Fatal\n");
				free(arr_8);
				return 1;
			}

			for (int i = tamanio_8; i < tamanio_8_nuevo; ++i)
			{
				arr_8[i]=i;
			}
			for (int i = 0; i < tamanio_8_nuevo; ++i)
			{
				printf("arr[%d]: %d\n",i,arr_8[i] );
			}
			free(arr_8);
			break;

case 9:
			int tamanio_9;
			printf("EJERCICIO 9\n");
			printf("Introduce el tamaño del array(más del necesario)\n");
			scanf("%d",&tamanio_9);
			char * str_9= (char *) malloc(tamanio_9*sizeof(char));
			if (str_9==NULL)
			{
				printf("Error Fatal\n");
				return 1;
			}

			printf("Introduce la cadena\n");
			scanf("%s",str_9);
			printf("%s\n",str_9);
		
			str_9= (char *) realloc(str_9,strlen(str_9)*sizeof(char));
			if (str_9==NULL)
			{
				printf("Error Fatal\n");
				free(str_9);
				return 1;
			}

			printf("%s\n",str_9);

			free(str_9);
			break;

		case 10:	

/*EJERCICIO 10*/
			int tamanio_10;
			printf("EJERCICIO 8\n");
			printf("Introduce el tamaño del array\n");
			scanf("%d",&tamanio_10);
			int * arr10= (int *) malloc(tamanio_10*sizeof(int));
			if (arr10==NULL)
			{
				printf("Error Fatal\n");
				return 1;
			}

			for (int i = 0; i < tamanio_10; ++i)
			{
				arr10[i]=i;
			}
			for (int i = 0; i < tamanio_10; ++i)
			{
				printf("\tarr[%d]: %d\n",i,arr10[i] );
			}
			tamanio_10*=2;
			printf("Array X 2\n");
			arr10= (int *) realloc(arr10,(tamanio_10)*sizeof(int));
			if (arr10==NULL)
			{
				printf("Error Fatal\n");
				free(arr10);
				return 1;
			}

			for (int i = tamanio_10/2; i < tamanio_10; ++i)
			{
				arr10[i]=i;
			}
			for (int i = 0; i < tamanio_10; ++i)
			{
				printf("\tarr[%d]: %d\n",i,arr10[i] );
			}
			free(arr10);
			break;

			case 11:
			int tamanio_11;
			printf("Tamaño del array\n");
			scanf("%d",&tamanio_11);
			
			ejercicio11 arr_11= (ejercicio11 *)malloc(tamanio_11*sizeof(ejercicio11));
			for (int i = 0; i < tamanio_11; ++i)
			{
				arr_11[i].num_11=i;
				arr_11[i].float_11=i+(i/10);
				printf("%d %f\n",arr_11[i].num_11,arr11[i].float_11);
			}

		default:
			break;
		}}while(ejercicio!=0);































































		return 0;
	}
