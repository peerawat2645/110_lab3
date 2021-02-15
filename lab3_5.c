#include<stdio.h>
int main()
{
    int n,a,b=2,c=0;
    scanf("%d",&n);
    a=n;
    while(a!=1)
    {

        while(a%b==0)
        {
            a/=b;
            if(a%b==0)
            {
                c++;
                break;
            }
            else if(a%b==1)
                break;
        }
        if(c==1)
        {
            break;
        }
        b++;
    }
    if(c==0)
        printf("%d is Lucky Number",n);
    else if (c==1)
    printf("%d is not a Lucky Number",n);
    return 0;
}
