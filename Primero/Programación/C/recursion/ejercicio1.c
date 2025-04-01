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
int contar(char * frase){

    if (*frase=='\0')
    {
        return 0;
    }

    if (*frase !='a'&& *frase !='e'&& *frase !='i'&& *frase !='o'&& *frase !='u')
    {
        return contar(frase+1)+1;
    }else{
        return contar(frase+1);
    }

}

int main() {
    char frase[20]= {"aholdac"};
    printf("%d\n",contar(frase));

return 0;
}
