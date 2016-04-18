#include "iostream"
#include "cmath"

using namespace std;

uint64_t n,s1,s2,s3,x,y,dem,S,n1,can,dt=1000000;

uint64_t SUM(uint64_t n)
{
    int i,j;
    can=sqrt(n);
    x=y=n;
    s1=n;
    for(i=2;i<=can;i++)
    {
        y=(n/i);
        s1+=y;
        s2+=(x-y)*(i-1);
        dem+=x-y;
        x=y;
    }
    dem+=can;
    if(dem==n)
        S=s1+s2;
    else
    {
        for(i=can+1;i<=(n-dem)+can;i++)
            s3+=n/i;
        S=s1+s2+s3;
    }
    if(S>1000000)
        return S%1000000;
    else
        return S;
}

int main()
{
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
        {
          cin>>n1;
          s2=s3=dem=0;
          cout<<SUM(n1)<<endl;
        }

}
