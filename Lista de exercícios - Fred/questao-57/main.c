/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Soma= 0, divisor;
    int i=1, j, N;
    
    printf("Digite o número de termos (N): ");
    scanf("%i", &N);
    
    while(N>=i){
      j=1; divisor=i;        
      
      while(i>j){           //while que se refere ao cálculo da potência;
          divisor*=divisor;   // divisor = i^j; i=j; enquanto j for menor que i multiplicar divisor por divisor(divisor é o valor de i(rodada));
          j++;
      }
      
    Soma+= (1/divisor); 
                    i++;}
        
    printf("Soma: %f", Soma);

    return 0;
}

