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
	int i,num,divisores;
	printf("Introduce un número\n");
		scanf("%d",&num);
	printf("los divisores de %d son los siguientes:\n",num);
	for(i=1;i<=num;i++){
	if (num%i==0){
		printf("%d\n",i);
	divisores++;
	}
	}
printf("el número de divisores de tu número es %d \n",divisores);

	return 0;
}
