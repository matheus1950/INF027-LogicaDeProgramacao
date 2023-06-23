/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A, B, resto;
    printf("Digite A e B(sendo A/B): ");
    scanf("%i %i", &A, &B);
    
    if(A<B){
        printf("O resto é: %i", A);
    }
    
    else
        while(A>=B){
            resto= A - B;
            A-= B;
            }
            
            printf("O resto é: %i", resto);
     
    
    return 0;
}
