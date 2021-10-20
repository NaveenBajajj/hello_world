/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//To check the prime number
#include <stdio.h>
#include <conio.h>
int main ()
{
  int n, flag = 0, i;
  printf ("Lets check the prime number");
  scanf ("%d", &n);
  for (i = 2; i <= n - 1; i++)
    if (n % i == 0)
      {
	flag = 1;
	break;
      }
  if (flag == 1)
    printf ("\n %d is not a prime number", n);
  else
    printf ("\n %d is a prime number", n);
  getch ();
}
