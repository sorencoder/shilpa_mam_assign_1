#include<stdio.h>
int
main ()
{
  int num;
  int temp;
  int sum = 0;
  printf ("Enter a number ");
  scanf ("%d", &num);
  while (num > 0)
    {
      temp = num % 10;
      sum = temp + sum * 10;
      num = num / 10;
    }
  while (sum > 0)
    {
      temp = sum % 10;
      printf ("%d", temp);
      printf ("\n");
      sum = sum / 10;
    }
}
