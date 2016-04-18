#include<iostream>
using namespace std;
int max1(int a,int b,int c)
{
    int max1=a;
    if(b>max1)
    max1=b;
    if(c>max1)
    max1=c;
    return max1;
}
int main()
{
    int a[104][104],m,n;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        cin>>a[i][j];

    for(int i=1;i<=m;++i)
        {
            a[0][i]=-10001;
            a[n+1][i]=-10001;
        }
    for(int j=2;j<=m;++j)
    {
            int i=1;
            while(i<=n)
        {
            a[i][j]=a[i][j] + max1(a[i-1][j-1],a[i][j-1],a[i+1][j-1]);
            i++;
        }
    }
    int max2=a[1][m];
    for(int i=2;i<=n;++i)
    {
        if(a[i][m]>max2)
        max2=a[i][m];
    }
    cout<<max2;
}

