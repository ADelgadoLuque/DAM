#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */


int fibo(int n){
if (n==0)
{
    return 0;
}else if (n==1){
    return 1;
}else{
    return fibo(n-1)+fibo(n-2);
}


}


int main() {

printf("%d\n",fibo(4));
return 0;
}
