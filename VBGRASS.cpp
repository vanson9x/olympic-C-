#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int i,j,m,n,dem=0,dem1=0;
    char a[101][101];
    queue<pair<int,int> > d;
    pair<int,int> p;
    int f,s;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];

    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++){
            if(a[i][j]=='#'){
                d.push(make_pair(i,j));
            if(a[i][j]==a[i][j+1]){
                d.push(make_pair(i,j+1));
                a[i][j+1]='*';
            }
            if(a[i][j]==a[i+1][j]){
                d.push(make_pair(i+1,j));
                a[i+1][j]='*';
            }
            while(d.empty()!=1){
                p=d.front();
                f=p.first;
                s=p.second;
                if(a[f][s]==a[f][s+1]){
                    d.push(make_pair(f,s+1));
                    a[f][s+1]=='*';
                }
                if(a[f][s]==a[f+1][s]){
                    d.push(make_pair(f+1,s));
                    a[f+1][s]='*';
                }
                d.pop();
                }
            if(d.empty()==1)
                dem++;
            }
        }

      /*  cout<<endl;
            for(i=1;i<=m;i++){
                for(j=1;j<=n;j++)
                    cout<<a[i][j];
                cout<<endl;
            }
        */
cout<<dem;
}
