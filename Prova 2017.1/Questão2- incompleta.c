#include <stdio.h>

int main()
{
    float V, recebido;
    int N, M, N1, N2, N3, N4, M1, M2, M3, M4, grupoN, grupoM;
    
    printf("Digite valor, número(N) e número(M) sorteado: ");
    scanf("%f %i %i", &V, &N, &M);
    
    N1= N%10000/1000;
    N2= (N%1000)/100;
    N3= ((N%1000)%100)/10;
    N4= ((N%1000)%100)%10;
    
    M1= M%10000/1000;
    M2= (M%1000)/100;
    M3= ((M%1000)%100)/10;
    M4= ((M%1000)%100)%10;
    
    
    if(((N%1000)%100)!=0 && ((M%1000)%100)!=0){
    grupoN= ((N%100)/4 + 1);
    grupoM= ((M%100)/4 + 1);}
    else{
    if((N%1000)%100==0){grupoN= 25;}
    if((M%1000)%100==0){grupoM= 25;}
    }
    
    printf("grupoN: %i\n", grupoN);
    printf("grupoM: %i\n", grupoM);
    
    if(N1==M1 && N2==M2 && N3==M3 && N4==M4){
    recebido= V*3000;
    }
    else if(N2==M2 && N3==M3 && N4==M4){
    recebido= V*500;
    }
    else if(N3==M3 && N4==M4){
    recebido= V*50;
    }
    
    if(grupoN==0){
    grupoN=100;
    }
    if(grupoM==0){
    grupoM=100;
    }
    
    else if(grupoN == grupoM){
    recebido= V*16;
    }
    
    else{
    recebido= 0;
    }
    
    printf("valor recebido é: %.2f\n", recebido);
    
    return 0;
}

