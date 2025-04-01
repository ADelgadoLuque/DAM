#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */

int prof(char * str,int balance){
    static int profundidad_maxima=0;
    

    if (*str=='\0')
    {
        int retval=profundidad_maxima;
        profundidad_maxima=0;
        return retval;
    }
    if (*str=='(')
    {
        balance++;
        if(balance>profundidad_maxima) profundidad_maxima=balance;
        return prof(str+1,balance);

    }
    if (*str==')')
    {
        
        return prof(str+1,balance-1);
        
    }else{return prof(str+1,balance);}
    
}

int main() {
char str[20]="(()(()((()))()))";
printf("%d\n",prof(str,0));

return 0;
}
