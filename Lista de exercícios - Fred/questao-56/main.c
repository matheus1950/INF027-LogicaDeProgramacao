/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int numero, n, soma;

    printf("Digite o número: ");
    scanf("%i", &numero);
    
    n=1, soma= 0;
    
    while(numero>n){
     if(numero%n==0){
              soma+=n;}
                    n++;}
    
    printf("soma: %i\n", soma);
    
    if(soma==numero){
        printf("O número é perfeito!");
    }
    else{printf("O número não é perfeito!");}
    

    return 0;
}
