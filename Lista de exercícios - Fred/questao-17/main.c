/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int valor;
    int x; 
    int y;
    int z; 
    int p;
    int m; 
    int n;
    int notas100;
    int notas50; 
    int notas20; 
    int notas10; 
    int notas5; 
    int notas2;
    int notas1;
    
    printf("Digite um valor: ");
    scanf("%i", &valor);
    
    notas100= valor/100;
    x = valor%100 ;
    
    notas50 = x/50;
    y = x%50;
    
    notas20 = y/20 ;
    z = y%20;
    
    notas10  = z/10;
    p = z%10 ;
    
    notas5= p/5 ;
    m = p%5;
    
    notas2= m/2;
    n = m%2;
    
    notas1 = n/1;
    
    printf("O número de notas de 100 é: %i\n",notas100);
    printf("O número de notas de 50 é: %i\n",notas50);
    printf("O número de notas de 20 é: %i\n",notas20);
    printf("O número de notas de 10 é: %i\n",notas10);
    printf("O número de notas de 5 é: %i\n",notas5);
    printf("O número de notas de 2 é: %i\n",notas2);
    printf("O número de notas de 1 é: %i",notas1);
    
    return 0;
}
