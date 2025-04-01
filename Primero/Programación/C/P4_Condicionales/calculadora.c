#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:Calculadora básica con switch-case
 */

int main() {
float num1;//inicializamos las variables que usaremos
float num2;
char operador;
printf("introduce el primer numero\n");
scanf("%f",&num1);//recogemos el primer número
printf("introduce el segundo numero\n");
scanf("%f",&num2);//recogemos el segundo número
printf("introduce el operador(+,-,*,/):\n");
scanf(" %c",&operador);//recogemos el operador
switch (operador){//con switch podemos definir varios resultados en función del valor de, en este caso el operador
	case '+'://si el valor de la variable operador fuera '+' se ejecutaría todo lo que sigue hasta el break;
	printf("%f %c %f =%f\n",num1,operador,num2,num1+num2);
	break;
	case '-':
	printf("%f %c %f =%f\n",num1,operador,num2,num1-num2);
	break;
	case '*':
	printf("%f %c %f =%f\n",num1,operador,num2,num1*num2);
	break;
	case '/':
	printf("%f %c %f =%f\n",num1,operador,num2,num1/num2);
	break;
	default://default define el caso en el que el valor de operador no coincide con ninguno de los casos definidos
	printf("Operador no válido\n");
	}
return 0;
}
