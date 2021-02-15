#include<stdio.h>
int main()
{
    int i,j,n,max=0,x;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
        int p[n],a[n];
        for(i=0; i<n; i++)
            scanf("%d %d",&p[i],&a[i]);
        for(i=0; i<n; i++)
        {
            if(p[i]>=1&&p[i]<=48&&a[i]>=1&&a[i]<=50000)
            {
                for(i=0; i<n; i++)
                {
                    if(p[i]==p[i+1])
                    {
                        a[i]+=a[i+1];
                    }
                    if(a[i]>max)
                    {
                        max=a[i];
                        x=i+1;
                    }
                }
            }
        }
        printf("%d %d",x,max);
    }

    return 0;
}
