#include "stdio.h"
#include "iostream"
#include "cmath"
using namespace std;

int i, j, n, m;
uint64_t kq=0;
char x[5005];
int a[5005][5005], b[5005][5005];

uint64_t Min(uint64_t x, uint64_t y, uint64_t z)
{
    uint64_t s;
    s=min(x,y);
    return min(s,z);
}
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        {
            fflush(stdin);
            cin>>x;
            for(j=1;j<=m;j++)
                a[i][j]=x[j-1];
        }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                if(a[i][j]=='0')
                    b[i][j]=Min(b[i][j-1],b[i-1][j],b[i-1][j-1])+1;
                kq+=b[i][j];
            }
    cout<<kq;
    return 0;
}

