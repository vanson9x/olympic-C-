#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char c[1000005];
int dem[1000005],a[1000005], k,res[1000005];
int number(int x){
    return x-'0';
}
void xuly(){
     for(int i=0;i<strlen(c);i++)
        a[i]=number(c[i]);
}
void sapxep(int a[],int n){
    int tg;
    for(int i=0;i<strlen(c);i++)
        for(int j=i+1;j<strlen(c);j++)
    if(a[i]<a[j]){
        tg=a[i];
        a[i]=a[j];
        a[j]=tg;
    }
}
void dich_bit(int a[], int &k){
    k=0;
    for(int i=0;i<strlen(c);i++){
        k=k>>a[i]|1;
        k=k<<a[i];
    }
}
int main(){
    int n,m,dem1=0,s=0,t;
    cin>>n;
    for(int i=1;i<=n;i++){
        fflush(stdin);
        gets(c);
        xuly();
        sapxep(a,n);
        dich_bit(a,k);
        res[i]=k;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            t=res[i]&res[j];
            if(t!=0) dem1++;
        }
    dem[i]=dem1;
    dem1=0;
    }
    for(int i=1;i<=n;i++)
       s+=dem[i];
       cout<<endl<<s;
}
