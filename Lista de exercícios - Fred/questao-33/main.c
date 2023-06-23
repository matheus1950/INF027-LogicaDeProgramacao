/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Digite o valor de x e y(na ordem): ");
    scanf("%i%i",&x,&y);
    
    if(x!=0 && y!=0)
    {if(x>0 && y>0)  // dúvida: pq se colocar ponto e vírgula após os "if", o código não funciona? (imprime tudo)
     printf("Primeiro quadrante");
    if(x<0 && y>0)
     printf("Segundo quadrante");
    if(x<0 && y<0)
     printf("Terceiro quadrante");
    if(x>0 && y<0)
     printf("Quarto quadrante");
        
    }
     
    else
     {if(x==0 && y==0)
     printf("Origem");
    else
     printf("Sobre o eixo");}
     
    return 0;
}
