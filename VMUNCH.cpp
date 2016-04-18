#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;
queue<pair<int,int> > q;
pair<int,int> p;
int n,m,a[150][150],u,v,s,t,res[150][150];
char c[150][150];
bool kt(int d, int f)
{
    return (1 <= d && d <= n && 1 <= f && f <= m);
}

void xet(int d, int f)
{
    if (kt(d,f) && a[d][f] == 1) {
        q.push(make_pair(d,f));
        a[d][f] = 0;
        res[d][f] = res[u][v] + 1;
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>c[i][j];
        if(c[i][j]=='.'){
            a[i][j]=1;
        }
        else{
            if(c[i][j]=='B'){
                a[i][j]=1;
                s=i; t=j;
            }
            if(c[i][j]=='C'){
                a[i][j]=0;
                u=i; v=j;
            }
        }
    }
    q.push(make_pair(u,v));
    res[u][v] = 0;

                        while (q.empty()!=1) {
                            p=q.front();
                            u=p.first;
                            v=p.second;
                            if (u == s && v == t) {
                                cout<<res[u][v];
                               exit(0);
                            }
                             xet(u-1,v);
                             xet(u+1,v);
                             xet(u,v-1);
                             xet(u,v+1);
                            q.pop();
                        }
    cout<<"0";
    return 0;
}
