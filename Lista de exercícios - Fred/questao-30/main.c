/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  char A;
  char G;
  float valorl;
  float desconto;
  float litros;
  float total;
  char tipo;

  printf ("Digite G para gasolina ou A para C!lcool: ");
  scanf ("%c", &tipo);

  printf ("Digite a quantidade de litros: ");
  scanf ("%f", &litros);

  if (tipo == 'A')
    if (litros <= 25)
      {
	valorl = litros * 1.90;
	desconto = valorl * 0.02;
	total = valorl - desconto;

	printf ("O valor com desconto C): %.2f", total);


      }
    else if (litros > 25)
      {
	valorl = litros * 1.90;
	desconto = valorl * 0.04;
	total = valorl - desconto;

	printf ("O valor com desconto C): %.2f", total);
      }


  if (tipo == 'G')
    {
      if (litros <= 25)
	valorl = litros * 2.70;
      desconto = valorl * 0.03;
      total = valorl - desconto;
      printf ("O valor com desconto C): %.2f", total);


    }
  else if (litros > 25)
    {
      valorl = litros * 2.70;
      desconto = valorl * 0.05;
      total = valorl - desconto;

      printf ("O valor com desconto C): %.2f", total);
    }







  return 0;
}
