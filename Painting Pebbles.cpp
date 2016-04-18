#include<iostream>
#include<cmath>

using namespace std;

void tomau(int a[], int n, int k){
    int dem,d;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
        if(a[i]<=k){
            for(int j=1;j<=a[i];j++) cout<<j<<" ";
            cout<<endl;
        }
        else{
            dem=a[i];
            while(dem>0){
                    if(dem>k) d=k;
                    else d=dem;
                for(int j=1;j<=d;j++){
                    cout<<j<<" ";
                    dem--;
                }
            }
            cout<<endl;
        }

}
int main(){
    int a[105],n,k,max1,min1;
    cin>>n>>k;
    for(int i=0;i<n;i++)    cin>>a[i];
        max1=min1=a[0]; //gan min-max;
    for(int i=0;i<n;i++)
        if(a[i]>max1) max1=a[i];
    else if(a[i]<min1) min1=a[i];
    if(max1-min1>k) cout<<"NO";
    else tomau(a,n,k);

    return 0;
}

