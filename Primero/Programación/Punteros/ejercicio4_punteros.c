#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */

void intercambio(int *a,int *b){
	int var1=*a;
	int var2=*b;

	*a=var2;
	*b=var1;
}
int main(){
  int num1=10,num2=20;
  printf("num1 %d, num2 %d\n",num1,num2);
  intercambio(&num1,&num2);
  printf("num1 %d, num2 %d\n",num1,num2);
  return 0;
  
 }
