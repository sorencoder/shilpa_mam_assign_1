#include<stdio.h>
int
main ()
{
  int num;
  int temp;
  int rev = 0;
  printf ("Enter a number ");
  scanf ("%d", &num);
  while (num > 0)
    {
      temp = num % 10;
      rev = temp + rev * 10;
      num = num / 10;
    }
  printf ("Reversed no. %d", rev);
  return 0;
}
