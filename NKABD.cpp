#include"iostream"
#include"iomanip"
#include"cmath"
using namespace std;
main()
{
    int a ,b,i,j;
    int s=0;
    int dem=0;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        s=0;
        for(j=2; j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                s=s+j;
                if(j!=sqrt(i))
                s+=(i/j);
            }
        }
        if(i<s+1)
        {
            dem++;
        }
    }
    cout<<dem<<endl;

}
