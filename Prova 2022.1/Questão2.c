#include <stdio.h>

int main()
{
int anguloH, anguloM, horas, minutos;

scanf("%i %i", &anguloH, &anguloM);

minutos= anguloM/6;

horas= anguloH/30;

printf("horário> %i:%i", horas, minutos);
    return 0;
}
