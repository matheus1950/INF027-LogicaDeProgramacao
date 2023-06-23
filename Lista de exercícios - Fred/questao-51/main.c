/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, valor;
    printf("Digite o N(termos): ");
    scanf("%i", &N);
    
    int a= 0, b= 1, i= 0;
    
    while(i<N){
      valor= a + b;
      printf("A sequência é: %i\n", valor);
      b=a; a= valor;
      i++;
        
    }
      

    return 0;
}
