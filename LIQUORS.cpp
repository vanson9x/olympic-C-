#include<iostream>
using namespace std;
void sapxep(int a[], int n){
    int tg;
    for(int i=0;i<n*2;i++)
    for(int j=i+1;j<n*2;j++)
    if(a[i]>a[j]){
        tg=a[i];
        a[i]=a[j];
        a[j]=tg;
    }
}
int main(){
    int n,a[250000];
    cin>>n;
    for(int i=0;i<n*2;i++)
        cin>>a[i];
    sapxep(a,n);
    for(int i=1;i<n*2;i=i+2)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n*2;i=i+2)
        cout<<a[i]<<" ";
}
