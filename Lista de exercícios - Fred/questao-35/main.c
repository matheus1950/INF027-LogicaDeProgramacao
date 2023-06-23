/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite o número correspondente ao dia da semana(Domingo dia 1): ");
    scanf("%i", &numero);
    
    if(numero<=7){
     if(numero==1)
      printf("Domingo");
     if(numero==2)
      printf("Segunda");
     if(numero==3)
      printf("Terça");
     if(numero==4)
      printf("Quarta");
     if(numero==5)
      printf("Quinta");
     if(numero==6)
      printf("Sexta");
     if(numero==7)
      printf("Sábado");}
      
    else
     printf("erro");
    
    
    return 0;
}
