#include <stdio.h>
#include <stdlib.h>


int main(){
	int numero1;
	printf("Introduce el primer número");
	scanf("%d",&numero1);
	int numero2;
	printf("Introduce el primer número");
	scanf("%d",&numero2);

	int resultado_suma=numero1+numero2;
	int resultado_resta=numero1-numero2;
	int resultado_multiplicacion=numero1*numero2;
	int resultado_division=numero1/numero2;

	printf("suma=%d\n",resultado_suma);	
	printf("resta=%d\n",resultado_resta);	
	printf("multiplicación=%d\n",resultado_multiplicacion);	
	printf("división=%d\n",resultado_division);
	return EXIT_SUCCESS;
}
