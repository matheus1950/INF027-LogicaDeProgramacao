/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 10

int main()
{

int v[max], i=0, n, pos, j=0;

printf("digite os números do vetor: \n");
while(max>i){
scanf("%i", &v[i]);
i++;
}

printf("digite o número que quer achar: \n");
scanf("%i", &n);

i=0;

while(max>i){           
if(v[i]==n){
pos= i;
i= max;
j++;
}

i++;
}

if(j>0){
printf("Número '%i' encontrado em v[%i]", n, pos);}
else{
printf("Não encontrado: -1");}

return 0;
}
