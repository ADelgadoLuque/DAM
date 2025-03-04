#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */

int contar(int numero){
    if (numero/10>0)
    {
        
        if ((numero%10)%2==0)
        {
            return(contar(numero/10)+1);
        }else if ((numero%10)%2==1){
            return(contar(numero/10));
        }
    }else if ((numero%10)%2==0)
    {
        return 1;
    }        
        return 0;
    }



int main() {
   int numero;
   scanf("%d",&numero);
    printf("%d numeros pares\n",contar(numero));

return 0;
}
