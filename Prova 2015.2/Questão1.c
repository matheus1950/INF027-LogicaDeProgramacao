#include <stdio.h>

int main()
{
float salario, desconto;
scanf("%f", &salario);
desconto = salario * 0.11;

if(desconto > 570.88){
desconto= 570.88;
}

printf("o desconto é: %.3f", desconto);
    return 0;
}
