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
int v[max], c[max], maior[max], i=0;

printf("digite o primeiro vetor: \n");

while(i<max){
scanf("%i", &v[i]);
i++;
}

i=0;


printf("digite o segundo vetor: \n");

while(i<max){
scanf("%i", &c[i]);
i++;
}

i=0;

while(i<max){

if(v[i]>c[i]){
maior[i]= v[i];
}
else{
maior[i]= c[i];
}    

i++;    
}

i=0;

printf("maior: \n");

while(i<max){
    
printf("v[%i]= %i\n", i, maior[i]);

i++;
}


    return 0;
}
