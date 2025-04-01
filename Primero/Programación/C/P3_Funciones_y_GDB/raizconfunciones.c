#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int calcularraiz(){
	int valor;
	double raiz;
//Cálculo de raíces
	printf("Introduzca un número para calcular su raíz\n");
	
	scanf("%d",&valor);
	raiz=sqrt(valor);
	printf("La raíz cuadrada de %d es %lf\n",valor,raiz);


}
int calculararea(){
	double radio,area;
//Cálculo de área de un círculo
	printf("Introduzca el radio del círculo para calcular su área\n");
	scanf("%lf",&radio);
	area=radio*radio*M_PI; //M_PI está definido en math.h
	printf("el área del círculo es %lf\n",area);

}



int main (){
	
	calcularraiz();
	calculararea();

return 0;
}










