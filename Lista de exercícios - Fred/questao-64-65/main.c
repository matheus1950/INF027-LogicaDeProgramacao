/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 20

int main()
{
int v[max], i=0, j=0, menor, maior, posm, posM;

while(i<max){
scanf("%i", &v[i]);
i++;
}

i= 0;

menor= v[i];
maior= v[i];

while(i<max){

if(v[j]<=menor){    //menor número
menor= v[j];
posm= j;
}

if(v[j]>=maior){  // maior número
maior= v[j];
posM= j;
}

j++;

 if(j==max){   //para resetar o contador "j", que percorre o vetor a cada v[i]
 j=0;
 i++;
 }
}

printf("menor: %i -> posição: v[%i]\n", menor, posm);
printf("maior: %i -> posição: v[%i]", maior, posM);
    return 0;
}
