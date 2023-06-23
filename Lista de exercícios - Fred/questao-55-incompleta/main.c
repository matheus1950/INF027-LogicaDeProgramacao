/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
    int A,B;
    printf("Digite A e B: ");
    scanf("%i %i", &A, &B);
    
    int n, n1, d, d1; // d e d1 são as somas dos divisores!
    
    n= 1; d= 0;

     while(A>n){
        if(A%n==0)
        d+=n;
         n++;}
    
    n1= 1; d1= 0;
    
    while(B>n1){
     if(B%n1==0)
         d1+=n1;
         n1++;}
         
    if(d==B && d1==A){
        printf("São números amigos");
    }
    else{
        printf("São normais");
    }
        }
