#include <stdio.h>

int main()
{
int a, m, d;

printf("digite ano, mes e dia: ");
scanf("%i %i %i", &a, &m, &d);

if(a%4==0 && m==2){
if(d==29){
d= 1; m= m+1;
}}

else if(d==31 && m==1 || m==3 || m==5 || m==7 || m==8 || m==10){
d=1; m= m +1;
}

else if(m==12 && d==31){
d=1; m= 1; a= a+1;
}

else if(d==30 && m==4 || m==6 || m==9 || m==11){
d= 1; m= m+1;
}

else if(d==29 && m==2){
d=1; m= m+1; 
}

else{
d= d+1; 
}

printf("Data posterior: dia %i /mês %i /ano %i", d, m, a);
    return 0;
}
