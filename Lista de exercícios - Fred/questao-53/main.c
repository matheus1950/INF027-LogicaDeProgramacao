/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i= 0;
    float A, B;
    
    A=5000000;
    B=7000000;
    
    while(A<=B){
    B= (B*0.02)+B;
    A= (A*0.03)+A;
    i++;
    }
    
    printf("São necessários %i anos", i);

    return 0;
}
