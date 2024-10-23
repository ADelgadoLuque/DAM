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
int numero;
printf("Introduce un número de al menos dos dígitos\n");
scanf("%d",&numero);
while (numero>=10){
numero=(numero/10)+(numero%10);

}
return 0;
}
