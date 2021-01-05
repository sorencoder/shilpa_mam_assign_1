#include<stdio.h>
int
main ()
{
  // char a='A';
  char c;
  printf ("Enter any character in the range A-Z: ");
  scanf ("%c", &c);
  int b = (int) c;
  if (b >= 65 && b <= 90)
    printf ("Corresponding ASCII value: %d", b);
  else
    printf ("Wrong Input");
  return 0;
}
