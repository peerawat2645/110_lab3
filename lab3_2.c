int main()
{
    int a,i,n,p,time[48]={0},max=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&a);
        time[p-1]+=a;
    }
    for(i=0;i<48;i++)
    {
        if(max<time[i])
        {
            max=time[i];
            x=i;
        }
    }
    printf("%d %d",x+1,time[x]);
}
