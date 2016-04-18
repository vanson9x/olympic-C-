#include "iostream"

using namespace std;

int a[1005];

int opera(int a[], int n, int S)
{
    int i,j,s=0;
    int max1=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
//                s=(a[i]-a[j])*(int)(S/a[j]);
//            else
            s=(a[j]-a[i])*(int)(S/a[i]);
            if(s>max1)
                max1=s;
        }
    return max1;
}
int main()
{
    int n,i,j,pi,S;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>pi>>S;
        for(j=0;j<pi;j++)
            cin>>a[j];
        cout<<opera(a,pi,S)<<endl;
    }
}
