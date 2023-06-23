#include <stdio.h>

int main()
{
float colesterol, HDL, LDL, trigli;

printf("colestorol, HDL e triglicerídios");
scanf("%f %f %f", &colesterol, &HDL, &trigli);

LDL= colesterol - HDL - 0,2*trigli;

if(LDL<100){
printf("Ótimo");
}
if(LDL>=100 && LDL<=129){
printf("Sub-ótimo");
}
if(LDL>=130 && LDL<=159){
printf("Limítrofe");
}
if(LDL>=160 && LDL<=189){
printf("Alto");
}
if(LDL>=190){
printf("Muilto alto");
}


    return 0;
}
