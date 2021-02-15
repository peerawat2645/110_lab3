#include<stdio.h>
int main()
{
    int n,i=2,a=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d\n",i);
                n/=i;
            }
        }
        i++;
    }
    printf("%d",a);
    return 0;
}
