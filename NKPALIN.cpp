#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int d,c,i,j,t=0,p;
    char a[2000],b[2000];
    cin>>a;
    d=0; c=strlen(a);
    for(i=c;i>d;--i){
        c=i;
        for(j=d;j<c;j++)
    if(a[i]==a[j]){
        b[t]=a[i]; t++;
        d=j; p=j;
        break;
    }
    }
    for(i=0;i<t;i++) cout<<b[i];
    if(a[p]!=a[p+1])
        cout<<a[p+1];
    for(i=t-1;i>=0;i--)
            cout<<b[i];
}
