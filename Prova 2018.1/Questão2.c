#include <stdio.h>

int main ()
{
  int a, b, c;

  scanf ("%i %i %i", &a, &b, &c);

  if (a == 0 || b == 0 || c == 0)
    {
      printf ("não irá derrotar");
    }
  else
    {
      if ((a > 10 || b > 10 || c > 10) && (a % 2 == 0 || b % 2 == 0 || c % 2 == 0))
	{ printf("irá derrotar");
	    
	}
      else
	{
	  printf ("não irá derrotar");
	}
    }
}
