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
	int i;
	int num=5;//en este caso la variable num no haría falta ya que sólo se requiere la tabla de 5 pero es útil de cara a usar valores recogidos con scanf
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",num,i,num*i);
	}


	return 0;
}
