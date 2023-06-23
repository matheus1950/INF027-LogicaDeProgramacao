#include <stdio.h>

int main()
{
    int cartao, c1, c2, c3, c4, r1, r2;  //cartão
    int horas1, horas2, minutos1, minutos2, horario, resto1, resto2; //horário
    int nmaior, nm1, nm2, nm3, nm4; //número maior
    int nmenor, nme1, nme2, nme3, nme4; //número menor
    int subtracao, s1, s2, s3, s4, rs1, rs2; //subtração
    int invertido; //resultado invertido
    
    printf("Digite o horário no formato HHMM(ex: 22:30= 2230): ");
    scanf("%i", &horario);
    
    horas1= horario/1000; // H
    resto1= horario%1000; 
    
    horas2= resto1/100; // H
    resto2= resto1%100; 
    
    minutos1= resto2/10;  //M
    minutos2= resto2%10; //M
    
    if(horario>2400||minutos1>5){
        printf("\nERRO/horário inexistente");}
    
    else{
    printf("\nDigite os 4 digitos finais do cartão: ");
    scanf("%i", &cartao);
    
    c1= cartao/1000; // c1
    r1= cartao%1000; 
    
    c2= r1/100; // c2
    r2= r1%100; 
    
    c3= r2/10;  //c3
    c4= r2%10;  //c4
    
    if(horas1>c1){             //maior entre hora1 e c1
        nm1= horas1;
        nme1= c1;
    }
     else{
        nm1= c1;
        nme1= horas1;
    }
    
    
    if(horas2>c2){              //maior entre hora2 e c2
        nm2= horas2;
        nme2= c2;
    }
     else{
        nm2= c2;
        nme2= horas2;
    }
    
    
    if(minutos1>c3){             //maior entre min1 e c3
        nm3= minutos1;
        nme3= c3;
    } 
     else{
        nm3= c3;
        nme3= minutos1;
     }
     
     if(minutos2>c4){           //maior entre min2 e c3
        nm4= minutos2;
        nme4= c4;}
      else{
        nm4= c4;
        nme4= minutos2;
      }
      
    nmaior= nm1*1000+ nm2*100 + nm3*10 + nm4;
    nmenor= nme1*1000+ nme2*100 + nme3*10 + nme4;
    
    subtracao= nmaior - nmenor;
    
    s1= subtracao/1000; //casa1
    rs1= subtracao%1000;
    
    s2= rs1/100; //casa2 
    rs2= rs1%100; 
    
    s3= rs2/10; //casa 3
    s4= rs2%10; //casa 4
    
    
    invertido= s4*1000 + s3*100 + s2*10 + s1;
    
    printf("\nO código de confirmação da transação é: %i", invertido);
        
    return 0;
        
    }
    
}

