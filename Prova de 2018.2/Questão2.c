#include <stdio.h>

int main()
{
    int decimal, divisao1, resto1, divisao2, resto2, divisao3, resto3;
    int soma, base7, restoSOMA, resultado;
    int div1, div2, div3, r1, r2, r3;
   
    printf("Digite um número de 0 a 999: ");
    scanf("%i", &decimal);
    
    {divisao1= decimal/7; 
    resto1= decimal%7; //casa4
    
    divisao2= divisao1/7;
    resto2= divisao1%7; //casa3
    
    divisao3= divisao2/7; //casa1
    resto3= divisao2%7; //casa2
    }
   
    base7= divisao3*1000 + resto3*100 + resto2*10 + resto1; //numero na base 7
    
    {div1= base7/1000; //casa1 
    r1= base7%1000;
    
    div2= r1/100; //casa2
    r2= r1%100;
    
    div3= r2/10; //casa3
    r3= r2%10; //casa4
    }
    
    soma= div1 + div2 + div3 + r3;
    
    restoSOMA= soma%7; //última casa
    
    resultado= decimal*10 + restoSOMA;
    
    printf("O valor do DV é: %i", resultado);
    
    return 0;
}

