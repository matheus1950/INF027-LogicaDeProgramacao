/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 30

int main()
{

int junho[max], i=0, j=0, maior, menor, soma1=0, soma2=0;


while(max>i){
scanf("%i", &junho[i]);
i++;
}

i=0;

maior= junho[i];
menor= junho[i];

while(max>i){            //maior e menor

if(junho[j]>maior){
maior= junho[j];
}
if(junho[j]<menor){
menor= junho[j];
}

j++;

if(j==max){
i++;
j=0;
}
}

printf("maior: %i\n", maior);
printf("menor: %i\n", menor);

i=0;

while(max>i){                   //somando até a metade
if(i<max/2){
soma1+=junho[i];
}
if(i>=max/2){
soma2+=junho[i];
}
i++;
}

printf("média 1ª quinzena: %.2f", soma1/(max/2.0)); //dividindo a soma pelo máximo dividido por 2 -> no caso: "soma/15"
printf("média 2ª quinzena: %.2f", soma2/(max/2.0));

    return 0;
}
