#include"iostream"
#include"iomanip"
using namespace std;
int n;
int t[60002],r[60002],c[60002];
int i,j,tong;

void nhap(int t[],int r[],int &n)
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>t[i];
    for(i=1;i<n;i++)
        cin>>r[i];
}
void xuly(int t[], int r[], int &n)
{
    int i=2;
    c[0]=0;
    c[1]=t[1];
   int max=c[1];
    while(i<=n)
    {
        if(c[i-2]+r[i-1]>c[i-1]+t[i])
           c[i]=c[i-1]+t[i];
        else
        c[i]=c[i-2]+r[i-1];
        i++;
    }
    cout<<c[n];
}
int main()
{
    nhap(t,r,n);
    xuly(t,r,n);
}
