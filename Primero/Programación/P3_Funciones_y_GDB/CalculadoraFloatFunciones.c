#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha última modificación:25/09/24
 *
 *	Título:Calculadora de floats usando funciones
 */


float suma(float num1,float num2){

return num1+num2;
}



float resta(float num1,float num2){

return num1-num2;
}



float multiplicacion(float num1,float num2){

return num1*num2;
}



float division(float num1,float num2){

return num1/num2;
}



int main() {
float num1,num2;

	printf("introduce el primer número\n");
	scanf("%f",&num1);
	printf("introduce el segundo número\n");
	scanf("%f",&num2);

	
printf("%f+%f=%f\n",num1,num2,suma(num1,num2));
printf("%f-%f=%f\n",num1,num2,resta(num1,num2));
printf("%f*%f=%f\n",num1,num2,multiplicacion(num1,num2));
printf("%f/%f=%f\n",num1,num2,division(num1,num2));

return 0;
}
