/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    float media;
    
    printf("Digite os valores: ");
    scanf("%f %f %f %f %f", &a, &b, &c ,&d, &e);
    
    media= (a+b+c+d+e)/5;
    
    printf("média = %.2f", media);

    return 0;
}
