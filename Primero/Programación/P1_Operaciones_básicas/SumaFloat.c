#include <stdio.h>
#include <stdlib.h>


int main(){
	float numero1;
	printf("Introduce el primer número");
	scanf("%f",&numero1);
	float numero2;
	printf("Introduce el primer número");
	scanf("%f",&numero2);

	float resultado_suma=numero1+numero2;
	float resultado_resta=numero1-numero2;
	float resultado_multiplicacion=numero1*numero2;
	float resultado_division=numero1/numero2;

	printf("suma=%f\n",resultado_suma);	
	printf("resta=%f\n",resultado_resta);	
	printf("multiplicación=%f\n",resultado_multiplicacion);	
	printf("división=%f\n",resultado_division);
	return EXIT_SUCCESS;
}
