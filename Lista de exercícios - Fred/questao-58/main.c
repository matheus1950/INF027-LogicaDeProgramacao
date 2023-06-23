/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i= 0, N;
    float soma= 0, divisor=1;
    
    printf("Digite o número determos(N): ");
    scanf("%i", &N);
    
    while(N>i){
    
        if(i%2==0){
         soma+=(1/(divisor*divisor*divisor));
        }
        else{
          soma-=(1/(divisor*divisor*divisor));
        }
       printf("Para N: %i\t A soma é: %f\t A fração adicionada: 1/(%.0f)^3\n", i, soma, divisor);
       
       i++; divisor+=2; }
   
   return 0;
}
