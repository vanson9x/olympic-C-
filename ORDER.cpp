#include<iostream>
#include<queue>
using namespace std;
queue<int> q;
bool number_up(int a[], int n){
    for(int i=1;i<n;i++)
        if(a[i]>a[i+1]) return 0;
    return 1;
}
int main(){
    int a[100005],n,m,k,x;
    char c;
    cin>>n>>m;
    for(int i=1;i<=n;i++)   cin>>a[i];

    for(int i=1;i<=m;i++){
        cin>>c;
        if(c=='!'){
            cin>>k>>x;
            a[k]=x;
        }
        else if(!number_up(a,n)) q.push(0);
            else q.push(1);
    }

    while(!q.empty()){
        if(q.front()==0) cout<<"NO\n";
        else cout<<"YES\n";
        q.pop();
    }
}
