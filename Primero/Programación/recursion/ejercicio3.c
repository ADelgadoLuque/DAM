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
void * separar(char * frase,char* frase2){

    if (*frase=='\0')
    {
        *frase2='\0';
        return 0;
    }

    if (*frase =='a'|| *frase =='e'|| *frase =='i' || *frase =='o'|| *frase =='u')
    {
        *frase2= *frase;
         separar(frase+1,frase2+1);
    }else{
         separar(frase+1,frase2);
    }

}

int main() {
    char frase[20]= {"abecidoneju"};
    char frase2[20];
    separar(frase,frase2);
    printf("%s\n",frase2);

return 0;
}
