/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float exame1,exame2,exame3,exame4,exame5;
    
    
    printf("Digite as notas dos exames:  ");
    scanf("%f%f%f%f%f", &exame1,&exame2,&exame3,&exame4,&exame5);
    
    if(exame1>70 && exame2>70 && exame3>70 && exame4>70 && exame5>70){
        printf("Classificação: A");
    }
        
    if(exame1>70 && exame2>70 && exame3>70 && exame4>70 && exame5<70){
        printf("Classificação: C");}
    else
    
    if(exame1>70 && exame2>70 && exame4>70 && exame5<70||exame3<70){
       printf("Classificação: B");}
       
    else{
      printf("Reprovado");}
    
        
    
     
    
    
    return 0;
}
