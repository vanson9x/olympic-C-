#include "iostream"
#include "stdio.h"
using namespace std;

string s="";
char a[7];

int main()
{
    int i, n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sprintf(a,"%d",i);
        s+=a;
    }
    sprintf(a,"%d",n);
    cout<<s.find(a)+1;
}
