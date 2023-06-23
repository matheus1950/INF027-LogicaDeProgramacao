/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i= 1, N, j;
    float soma= 1, divisor;
    
    printf("Digite o número determos(N): ");
    scanf("%i", &N);
    
    printf("1");
    
    while(N>=i){
      
     j= i; divisor= 1;
    
      while(j>0){
         divisor= divisor * j;
          j--;
      }
        printf("+ 1/%.0f", divisor);
        
        soma+= (1/divisor);

       i++; 
      
    }
       printf("\n");
       printf("Resultado da soma: %f\n", soma);
       
}
