#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:2/10/24
 *
 *	Título:Días de la semana
 */

int main() {
int dia;//inicializamos las variables y recogemos los valores necesarios asignándolos a las variables correspondientes
printf("Introduce un número: ");
scanf("%d",&dia);

switch (dia){//usando switch definiremos los casos en los que en función del número introducido mostraremos el día de la semana correspondiente
	case 1:
	printf("Resultado: Lunes\n");
	break;
	case 2:
	printf("Resultado: Martes\n");
	break;
	case 3:
	printf("Resultado: Miércoles\n");
	break;
	case 4:
	printf("Resultado: Jueves\n");
	break;
	case 5:
	printf("Resultado: Viernes\n");
	break;
	case 6:
	printf("Resultado: Sábado\n");
	break;
	case 7:
	printf("Resultado: Domingo\n");
	break;
	default:
	printf("Número inválido\n");//mensaje por defecto si el número introducido no corresponde con alguno de los definidos más arriba
}
return 0;
}
