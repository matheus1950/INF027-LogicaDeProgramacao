/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i=501, j=0, n= 0, primos[900];

while(j<999){
if(j%2!=0 && j%3!=0 && j%5!=0 && j%6!=0 && j%7!=0 && j%11!=0 && j%13!=0 && j%17!=0){
primos[n]= j;
n++;
}
j++;
}


j=0, n=0;

while(i<999){
    
if(i%2==0){
printf("o número é: %i\n", i);

 while(primos[n] + primos[j]!=i){
 if(j<900){
 j++;
 }
 else{
 j=0;
 n++;
 }
 }
 printf("números primos: %i + %i\n\n", primos[n], primos[j]);
 }   

i++;
}
    return 0;
}
