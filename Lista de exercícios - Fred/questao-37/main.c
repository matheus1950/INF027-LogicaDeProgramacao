/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   char tipo;
    float acre, custo, custo1, custo2;

    printf("Digite o tipo de praga(1,2,3 ou 4): ");
    scanf("%c", &tipo);
    printf("Declare o tamanho da área(em acres): ");
    scanf("%f", &acre);
    
    if(tipo== '1'){
     custo= 50*acre;
    }
    if(tipo== '2'){
     custo= 100*acre;
    }
    if(tipo== '3'){
     custo= 150*acre;
    }
    if(tipo== '4'){
     custo= 250*acre;
    }
    
    if(acre<1000 && custo<750){
     printf("O valor é(sem desconto): %f", custo);
    }
    
    else{
    if(acre>1000){
     custo1= custo - (custo*0.05);
    }
    }
    
    if(custo<750){
      printf("O valor com desconto é(de acre apenas): %.2f", custo1);}
    
    else{
     if(custo1>750 && acre>1000){
      custo2= custo1 - (custo1-750)*0.1;
       printf("O valor com desconto é(de acre e custo): %.2f", custo2);
     }
      else{
        if(custo>750 && acre<1000){
            custo2= custo-(custo-750)*0.1;
             printf("O valor c om desconto é(de custo apenas): %.2f", custo2);
        }
      }
    }
    
    
    return 0;
}

