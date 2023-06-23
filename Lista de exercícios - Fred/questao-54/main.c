/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int numero;
    printf("Digite o número: ");
    scanf("%i", &numero);
    
    int n=1;
    
    while(n*(n+1)*(n+2)<=numero){
        if(n*(n+1)*(n+2) == numero){
            printf("É triangular");
            break;}
            else{n++;}
        }
        if(n*(n+1)*(n+2)!=numero){
            printf("Não é triangular");
        }    
        
    

    return 0;
}
