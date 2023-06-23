#include <stdio.h>
int main()
{ 
 int c1,c2,c3,c4;
 int trit, decimal;
 int r1,r2;
 
 printf("Digite o trit: ");
 scanf("%i", &trit);
 
 c1= trit/1000; //c1
 
 r1= trit%1000;
 c2= r1/100; //c2
 
 r2= trit%100;
 c3= r2/10; //c3 
 
 c4= trit%10; //c4
 
 if(trit> 999){
 switch(c1){
     case 2: c1 = 27; break;
     case 1: c1 = 0; break; 
     case 0: c1 = -27; break; 
 }}
 if(trit> 99){
 switch(c2){
     case 2: c2= 9; break; 
     case 1: c2= 0; break;
     case 0: c2= -9; break;
 }}
 if(trit>9){
 switch(c3){
     case 2: c3= 3; break;
     case 1: c3= 0; break; 
     case 0: c3 -3; break;
 }}
 switch(c4){
     case 2: c4= 1; break;
     case 1: c4= 0; break;
     case 0: c4= -1; break;
 }
 

decimal= c1+c2+c3+c4;

printf("em decimal é: %i", decimal);
    
return 0;
}




