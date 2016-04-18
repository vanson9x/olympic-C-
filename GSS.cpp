#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
queue <int> q;
int a[50005],x,y,b[50005];
void nhap(int a[], int n){
    for(int i=1;i<=n;i++)
        cin>>a[i];
}
void qmax(int &x, int &y){
    cin>>x>>y;
    int s=0,j=1,dem=0;
    if(x==y-1)
        q.push(max(x,y));
    else{
    for(int i=x;i<=y;i++){
        if(a[i+1]-1==a[i]){
            s=a[i]+a[i+1];
            dem++;
        }
        else if(dem>0){
            b[j]=s;
            j++;
            s=0;
        }
    }
    int max1=b[1];
    for(int i=1;i<=j;i++){
        if(max1<b[i]){
            max1=b[i];
        }
    }
    q.push(max1);
}
}
int main(){
    int n,m;
    cin>>n;
    nhap(a,n);
    cin>>m;
    for(int i=0;i<m;i++){
        qmax(x,y);
    }
    while(q.empty()!=1){
        cout<<q.front()<<endl;
        q.pop();
    }
}
