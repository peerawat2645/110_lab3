#include <stdio.h>
int main()
{
    int i,j,score,total,z,x=0,max=0;
    for(i=0;i<5;i++)
    {
        total=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&score);
            total+=score;
        }
        if(total>max)
        {
            max=total;
            x=i;
        }
    }
    printf("%d %d",x+1,max);
    return 0;
}
