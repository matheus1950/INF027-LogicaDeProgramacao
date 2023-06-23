#include <stdio.h>

int main()
{
    float P1, C1, P2, C2;
    
    
    printf("P1 C1 P2 C2: \n");
    scanf("%f %f %f %f",&P1, &C1, &P2, &C2);
    
    if(P1*C1 > C2*P2){
    printf("penderá para o lado 1");
    }
    else if(P2*C2 > C1*P1){
    printf("penderá para o lado 2");
    }
    else{
    printf("equilibrado");
    }
    return 0;
}
