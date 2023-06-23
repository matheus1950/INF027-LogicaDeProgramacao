#include <stdio.h>

int main()
{
int trad, dec, hT, mT, sT, cT;
float multiplicador;


printf("Inclua um horário tradicional(HHMMSSCC): ");

scanf("%i", &trad);

hT= trad/1000000;
mT= (trad%1000000)/10000;
sT= (trad%10000)/100;
cT= trad%100;

cT= hT*60*60*100 + mT*60*100 + sT*100 + cT; //tudo em centésimo 

multiplicador= (10*100*100)/(24.0*60.0*60.0);

printf("multiplicador: %f\n", multiplicador);

cT= cT*multiplicador; //convertendo

sT= cT/100;
mT= sT/100;
hT= mT/100;
cT= cT%100;
sT= sT%100;
mT= mT%100;

printf("Ht: %i, mT: %i, sT: %i, cT: %i", hT, mT, sT, cT);

dec= hT*1000000 + mT*10000 + sT*100 + cT;

printf("Decimal: %i", dec);


    return 0;
}


