/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int A, B, N, R, i;
    printf("Digite os 2 valores: ");
    scanf("%i %i", &A, &B);
    printf("Digite o número de termos: ");
    scanf("%i", &N);
    
    i= 1;
    
    while(N>=i){
        if(i%2==0){
            printf("termo: %i\n", B);
            B= A-B;
            
        }
        else{
            printf("termo: %i\n", A);
            A+=B; 
            }
        i++;
    }

    return 0;
}
