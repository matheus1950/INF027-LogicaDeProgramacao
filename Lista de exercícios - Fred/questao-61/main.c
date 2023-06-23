/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    
	int num[20]= {0};  // funciona apenas para tornar todos elementos do vetor(20 no caso) em ZERO, não funciona para outros valores.
	int i;             // o mesmo ocorre ao deixar as chaves vazias.
	
	
	for(i=0;i<20;i++){
		printf("Valor: %d -- Posicao: %d\n", num[i], i);
	}
    
    
   

    return 0;
}
