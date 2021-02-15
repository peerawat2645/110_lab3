#include<stdio.h>
int main()
{
  int n, i = 3, count, c,max;
  scanf("%d", &n);
  for (count = 2; count <= n;)
  {
    for (c = 2; c <= n; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      max=i;
      count++;
    }
    if(i==n)
        break;
    i++;
  }
    printf("%d",max);
  return 0;
}
