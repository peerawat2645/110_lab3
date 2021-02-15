#include<stdio.h>
int main()
{
    int i,j,n,max=0,x;
    scanf("%d",&n);
    int p[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
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
    printf("%d %d",x,max);
    return 0;
}
