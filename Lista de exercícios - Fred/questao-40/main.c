/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  char d, u;
  int numero, numero1;
  int dezena, unidade;

  printf ("Digite o nC:mero: ");
  scanf ("%i", &numero);

  if (numero == 100 || numero == 0)
    {
      if (numero == 100)
	printf ("cem");
      else if (numero == 0)
	printf ("zero");

    }

  else

    d = numero / 10;
  u = numero % 10;


  switch (d)
    {
    case 1:
      {
	switch (u)
	  {
	  case 1:
	    printf ("onze");
	    break;
	  case 2:
	    printf ("doze");
	    break;
	  case 3:
	    printf ("treze");
	    break;
	  case 4:
	    printf ("quatorze");
	    break;
	  case 5:
	    printf ("quinze");
	    break;
	  case 6:
	    printf ("desesseis");
	    break;
	  case 7:
	    printf ("desessete");
	    break;
	  case 8:
	    printf ("dezoito");
	    break;
	  case 9:
	    printf ("dezenove");
	    break;
	  }
      }
      break;

    case 2:
      printf ("Vinte");
      break;
    case 3:
      printf ("Trinta");
      break;
    case 4:
      printf ("Quarenta");
      break;
    case 5:
      printf ("Cinquenta");
      break;
    case 6:
      printf ("Sessenta");
      break;
    case 7:
      printf ("Setenta");
      break;
    case 8:
      printf ("Oitenta");
      break;
    case 9:
      printf ("Noventa");
      break;
    }



  if (d > 1 && u != 0)
    {
      printf (" e");
    }

  if (d != 1)
    {
      switch (u)
	{
	case 1:
	  printf (" um");
	  break;
	case 2:
	  printf (" dois");
	  break;
	case 3:
	  printf (" trC*s");
	  break;
	case 4:
	  printf (" quatro");
	  break;
	case 5:
	  printf (" cinco");
	  break;
	case 6:
	  printf (" seis");
	  break;
	case 7:
	  printf (" sete");
	  break;
	case 8:
	  printf (" oito");
	  break;
	case 9:
	  printf (" nove");
	}
    }

}
