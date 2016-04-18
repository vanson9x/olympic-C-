#include "stdio.h"
int a[1002][1002],b[1002][1002];
int min1(int a,int b,int c)
{
    int min1=a;
    if(b<min1)
    min1=b;
    if(c<min1)
    min1=c;
    return min1;
}
int main()
{
    int c,d,i,j;
    scanf("%d%d",&c,&d);
    int max=b[1][1];
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=d;j++)
        {
            b[0][1]=0;
            scanf("%d",&a[i][j]);
            if(a[i][j-1]==a[i-1][j-1]&&a[i-1][j-1]==a[i-1][j])
                b[i][j]=min1(b[i][j-1],b[i-1][j-1],b[i-1][j])+1;
            else
            {
                if(a[i][j-1]!=a[i-1][j-1]||a[i-1][j-1]!=a[i-1][j])
                b[i][j]=1;
            }
            if(b[i][j]>max)
            max=b[i][j];
        }
    }
    printf("%d",max);
}
