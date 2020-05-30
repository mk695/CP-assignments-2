#include<stdio.h>
int
main ()
{
  int n, m, i, num[100], loc;
  printf ("Enter the numbers of elements: ");
  scanf ("%d", &n);
  printf ("Enter elements into array");
  for (i = 0; i < n; ++i)
    {
      scanf ("%d", &num[i]);
    }
  printf ("Enter element to be searched");
  scanf ("%d", &m);
  for (i = 0; i < n; ++i)
    if (num[i] == m)
      {
     	loc=1;
     	break;
      } 
    if(loc==1)
    {
      printf ("Element %d is present at the location %d", m, loc+i);
    }
    else
    {
        printf ("Element not prsent");
    }
  return 0;
}
