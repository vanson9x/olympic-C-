#include<iostream>
using namespace std;
int max1=200000000;
int a[50005],b[500005],M,N,K;
int c[200000000]={0},d[200000000]={0};
int main(){
    int i,j;
    cin>>M>>N>>K;
    for(i=0;i<M;i++)    cin>>a[i];
    for(i=0;i<N;i++)    cin>>b[i];

    for(i=0;i<M;i++)
    for(j=0;j<N;j++){
        if(a[i]+b[i]<=max1)
            c[a[i]+b[j]]+=1;
        else
            d[(a[i]+b[i])/100]+=1;
    }
    int dem=0;
    for(int i=0;i<=max1;i++){
        if(dem==K) return 0;
        else{
            while(c[i]>0){
                cout<<i<<endl;
                c[i]-=1;
                dem++;
            }
        }
        }
        if(dem!=K)
        for(i=0;i<=max1;i++){
            if(dem==K) return 0;
            else if(d[i]>=1){
                    while(d[i]>0){
                    cout<<i*100<<endl;
                    d[i]-=1;
                    dem++;
                }
            }
        }
    }
