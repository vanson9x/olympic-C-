#include "iostream"
#include "stdlib.h"s
using namespace std;

int64_t a[100000];
int n;

int64_t dem1(int64_t a[], int64_t min, int l)
{
    int dem1=0, j=0;
    while(a[l]>=min )
    {
        if(l==-1|| j>=min)  break;
        dem1++;
        l--;
        j++;
    }
    return (dem1>=min?dem1:0);
}
int64_t dem2(int64_t a[], int64_t min, int r)
{
    int dem2=0, j=0;
    while(a[r]>=min)
    {
        if(r==n || j>=min)  break;
        dem2++;
        r+=1;
        j++;
    }
    return (dem2>=min?dem2:0);
}
int main()
{
    int i, x, y, min, dem, res=0, max=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        {
            min=a[i];
            x=dem1(a,min,i);
            y=dem2(a,min,i);
            dem=(x>=y?x:y);
            res=(dem>=min?min:0);
            if(res>=max) max=res;
        }
    cout<<max;
}
