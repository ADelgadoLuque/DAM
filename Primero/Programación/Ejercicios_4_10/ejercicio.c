#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:04/10/24
 *
 *	Título:Ejercicio de clase
 */



void es_vocal(char letra){
	if (letra=='a' || letra=='A' ||letra=='e' || letra=='E' || letra=='i' || letra=='I' || letra=='o' || letra=='O' || letra=='u' || letra=='U'){

		printf("la letra %c es una vocal\n",letra);
	}else{
		printf("La letra %c no es una vocal\n",letra);
	};
}

void calcular_area_figura(){
	float figura;
	printf("¿Qué figura deseas calcular? (círculo=1, Cuadrado=2)\n");
	scanf("%f",&figura);

	if (figura==1){
		float radio;
		printf("Introduce el radio del círculo\n");
		scanf("%f",&radio);
		printf("El área de tu círculo de radio %f es %f\n",radio,M_PI*radio*radio);
	}else if(figura==2){
		float lado;
		printf("Introduce el lado del cuadrado\n");
		scanf("%f",&lado);
		printf("el área del cuadrado de lado %f es %f\n",lado,lado*lado);
	}else{printf("Error\n");
	}
}


double calcular_promedio_tres_num(double num1,double num2,double num3){
	double resultado =(num1+num2+num3);
	resultado =(resultado/3);	
	return printf("El promedio de %lf,%lf y %lf es %lf\n",num1,num2,num3,resultado);
}

double calcular_promedio_cuatro_num(double num1,double num2,double num3,double num4){
	double resultado =(num1+num2+num3+num4);
	resultado =(resultado/4);
	return printf("El promedio de %lf, %lf, %lf y %lf es %lf\n",num1,num2,num3,num4,resultado);
}
void calcular_promedio(){
	float eleccion;
	double num1;//inicializamos las variables que contienen los números
	double num2;
	double num3;
	double num4;
	printf("¿De cuántos números quieres calcular el promedio? (3,4)\n");
	scanf("%f",&eleccion);
	if (eleccion==3){//en el caso de que sean tres números les asignamos valor y llamamos a la función correspondiente
		printf("Introduce el primer número\n");
		scanf("%lf",&num1);
		printf("Introduce el segundo número\n");
		scanf("%lf",&num2);
		printf("Introduce el tercer número\n");
		scanf("%lf",&num3);
		calcular_promedio_tres_num(num1,num2,num3);

	}else if (eleccion==4){//asignamos valor a los 4 números y llamamos a la función correspondiente
		printf("Introduce el primer número\n");
		scanf("%lf",&num1);

		printf("Introduce el segundo número\n");

		scanf("%lf",&num2);
		printf("Introduce el tercer número\n");

		scanf("%lf",&num3);
		printf("Introduce el cuarto número\n");

		scanf("%lf",&num4);
		calcular_promedio_cuatro_num(num1,num2,num3,num4);

	}else{
		printf("Error\n");
	}

}	

void convertir_hora_24_12(){
int hora24;
printf("Introduce la hora en formato 24h para convertir a formato 12h\n");
scanf("%d",&hora24);
if (hora24>=12){
	printf("La hora en formato de 12h es: %dpm\n",hora24-12);
}else if(hora24<12){
	printf("La hora en formato de 12h es: %dam\n",hora24);
	
}else{
printf("Error\n");
}


}
void es_primo(){
int num;
if(num<10){ 
if (num%2==0 || num%3==0 || num%5==0 || num%7==0){
printf("Tu número no es primo");
}else if(num%2==1 || num%3==1 || num%5==1 || num%7==1){
printf("Tu número es primo");
}else{}
}else{
printf("Error");
}
}
void comparar_3_numeros(){

	return ;
}



int main() {
	int decision;

	printf("Selecciona una función\n\
	1. Verificar si una letra es una vocal\n\
	2. Calcular el área de una figura (círculo o cuadrado)\n\
	3. Calcular el promedio de 3 o 4 números\n\
	4. Convertir una hora en formato de 24 horas a 12 horas\n\
	5. Verificar si un número menor de 10 es primo\n\
	6. Comparar tres números\n\
	7. Salir\n");

	scanf("%d",&decision);

	switch (decision){
		case 1:	
			char letra_main;
			printf("Indroduce una letra\n");
			scanf(" %c",&letra_main);
			es_vocal(letra_main);
			break;

		case 2:
			calcular_area_figura();
			break;

		case 3:
			calcular_promedio();
			break;

		case 4:
			convertir_hora_24_12();
			break;

		case 5:
			es_primo();
			break;

		case 6:
			comparar_3_numeros();
			break;

		case 7:

			break;
		default:
			printf("Error");
	}
	return 0;
}
