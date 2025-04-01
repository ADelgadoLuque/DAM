#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float numero1 = 6;
	float numero2 = 4;
	int resta,multiplicacion;
	float division;

	resta=numero1-numero2;
	multiplicacion=numero1*numero2;
	division=numero1/numero2;
	printf("resta=%d\n",resta);	
	printf("multiplicación=%d\n",multiplicacion);
	printf("división=%f\n",division);
	return EXIT_SUCCESS;
}
