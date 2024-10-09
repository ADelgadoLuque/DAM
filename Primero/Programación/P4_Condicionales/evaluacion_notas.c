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
float nota;//inicializamos las variables y recogemos los valores necesarios asignándolos a las variables correspondientes.
printf("Introduce tu calificación: ");
scanf("%f",&nota);
//usando ? como condicional podemos ver si la nota introducida es un aprobado o no. La estructura para usar ? es la siguiente: (condición) ? resultado_true : resultado_false
nota= (nota>=0&&nota<=10) ? nota=(nota>=5) ? printf("Resultado: Aprobado\n"):printf("Resultado: Suspendido\n"):printf("Número inválido\n");

return 0;
}
