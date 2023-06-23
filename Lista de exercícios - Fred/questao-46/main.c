/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int A, B;
   int subtracao, quociente;
   
   printf("Em A/B, dê valor para A e B: ");
   scanf("%i %i", &A, &B);
   
   quociente= 0;
   
   if(A>B){
   do{
      A-=B;
      quociente++;
   }while(A>=B);
   printf("O valor do quociente é: %i", quociente);
   }
   
   else{
        printf("O quociente é 0");
    }
    
   
    return 0;
}
