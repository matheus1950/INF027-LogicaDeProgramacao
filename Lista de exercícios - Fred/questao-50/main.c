/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int valor, B= 1, A;
    
    printf("O valor é: ");
    scanf("%i", &valor);
    
    while(A>=1 && B<6){
      A= valor - B;
      if(A<7){
      printf("Os valores de A e B são: %i %i\n", A, B);}
      B++;
    }
    
    printf("não é possível");
    
    
     return 0;
}
