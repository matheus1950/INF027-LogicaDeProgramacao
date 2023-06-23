/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int contador, divisor, numero;
    
    printf("digite o número: ");
    scanf("%i", &numero);
    
   divisor=1;
    
    while(numero>=divisor){
        if(numero%divisor==0){
            contador++;
        }
        divisor++;
        }
        
    if(contador<=2){
        printf("o número é primo");
    }
    else{printf("o número não é primo");}
    
    
     return 0;
}
