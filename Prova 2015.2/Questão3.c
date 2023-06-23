#include <stdio.h>

int main()
{
int classe;
float c, l, area, lampada; 

printf("Digite comprimento e largura: ");
scanf("%f %f", &c, &l);
printf("Digite o número da classe: ");
scanf("%i", &classe);

area= c * l;

switch(classe){
case 1: lampada= (12 * area)/60; break;
case 2: lampada= (15 * area)/60; break;
case 3: lampada= (20 * area)/60; 
}

printf("Nº de lâmpadas: %.2f", lampada);
    return 0;
}
