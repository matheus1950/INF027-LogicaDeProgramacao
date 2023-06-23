#include <stdio.h>

int main()
{
int A, B, Ar, Br;
int a1, a2, a3, b1, b2, b3;

scanf("%i %i", &A, &B);

a1= A/100;
a2= A%100/10;
a3= (A%100)%10;

b1= B/100;
b2= B%100/10;
b3= (B%100)%10;

if(a1>b1){
b1=0;
}
else if(b1>a1){
a1=0;
}

if(a2>b2){
b2=0;
}
else if(b2>a2){
a2=0;
}

if(a3>b3){
b3=0;
}
else if(b3>a3){
a3=0;
}

if(a2==0){  //se a2 for 0: trasnformar a2 em a1 ---> zerar a1;
a2= a1;
a1= 0;
}

if(a3==0){  //se a3 for 0: trasnformar a3 em a2 --> a2 em a1 --> zerar a1;
a3= a2;
a2= a1;
a1=0;
}

if(b2==0){ 
b2= b1;
b1= 0;
}

if(b3==0){
b3= b2;
b2=b1;
b1=0;
}

Ar= 100*a1 + 10*a2 + a3;
Br= 100*b1 + 10*b2 + b3;

if(a1==0 && a2==0 && a3==0){
Ar= -1;
}
if(b1==0 && b2==0 && b3==0){
Br= -1;
}

printf("Dupla resultado: %i e %i", Ar, Br);

    return 0;
}

