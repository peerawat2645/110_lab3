#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d\n",i);
                n/=i;
                if(n==1)
            printf("0");
            }
        }
        i++;

    }
    return 0;
}
