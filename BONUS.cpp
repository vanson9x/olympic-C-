#include "stdio.h"
#include "iostream"
int i,j;
uint64_t a[1005][1005];
void nhap(int &n, int &k)
{
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(j=0;j<=n;j++)
        {
            a[0][j]=0;
            a[j][0]=0;
        }
}
int tinhtoan(int n, int k)
{
    uint64_t s;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=(a[i][j-1]+a[i-1][j]+a[i][j])-a[i-1][j-1];
    uint64_t Max=a[k][k];
    for(i=k;i<=n;i++)
        for(j=k;j<=n;j++)
    {
        s=(a[i][j]-(a[i-k][j]+a[i][j-k]))+a[i-k][j-k];
        if(s>Max)
            Max=s;
    }
    return Max;
}
int main()
{
    int n,k;
    nhap(n,k);
    printf("%d\n",tinhtoan(n,k));
    return 0;
}
