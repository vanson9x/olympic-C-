#include<iostream>
#include<deque>
using namespace std;
int a[1000001],b[1000001]={0},cm[1000001],cx[1000001],n,k;
deque<int> qm,qx;

int main(){
    int dem=0,s=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)   cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        while(!qm.empty() && a[i]<=a[qm.back()]) qm.pop_back();
            qm.push_back(i);
        if(qm.back()-qm.front()>=k) qm.pop_front();
            cm[i]=a[qm.front()];
            b[qm.front()]=b[qm.front()]+1;
    }
    for(int i=1;i<=n;i++)
        s=s+cm[i];
    cout<<s*2<<endl;
    for(int i=1;i<=n;i++)
        cout<<b[i]*2<<" ";

}
