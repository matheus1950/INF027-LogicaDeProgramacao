/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float EmprestimoT, RendaM, nPrestacao, vPrestacao;
   
   printf("Digite o valor do empréstimo, o valor da renda média e o número de prestações: ");
   scanf("%f%f%f", &EmprestimoT, &RendaM, &nPrestacao);
   
   vPrestacao= EmprestimoT/nPrestacao;
   
   if(EmprestimoT<=10*RendaM && vPrestacao<=0.3*RendaM){
       printf("Aprovado");
   }
     else
      printf("Reprovado");
      
     
   return 0;
}
