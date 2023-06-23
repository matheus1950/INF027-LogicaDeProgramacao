/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int soma= 0;
    
    for(i=1; i<=100; i++){
        soma+=i;
        printf("O número é: %i\n", i);
    }
    printf("O valor da soma é: %i\n", soma);
   
    return 0;
    
}
