#include <iostream>
#include <queue>
#include<deque>
using namespace std;
queue<pair<int,int> > q;
deque<pair<int,int> > g;
pair<int,int> p,p1;
int n,m,u,v,i,j,dem=0,b[4005][4005]={0};
char a[4005][4005];
bool kt(int d, int f){
    return 1<=d && d<=n && 1<=f && f<=m;
}
void loang(int d, int f){
    if(kt(d,f)==1 && a[d][f]==a[u][v] && b[d][f]!=1){
        q.push(make_pair(d,f));
        b[d][f]=1;
    }
}
void xet(int d, int f){
    if(kt(d,f)==1 && a[d][f]!=a[u][v] && a[d][f]!='.' && b[d][f]!=1){
        g.push_front(make_pair(d,f));
        b[d][f]=1;
    }
}
void xet2(int d, int f){
    if(kt(d,f)==1 && a[d][f]!=a[u][v] && a[d][f]!='.' && b[d][f]!=1){
        g.push_back(make_pair(d,f));
        b[d][f]=1;
    }
}
bool isok(){
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(a[i][j]!='.') return 1;
    return 0;
}
void duyet(){
    q.push(make_pair(n,m));
    while(q.empty()!=1){
        p=q.front();
        u=p.first;
        v=p.second;
        loang(u+1,v);
        loang(u-1,v);
        loang(u,v+1);
        loang(u,v-1);
        xet(u+1,v);
        xet(u-1,v);
        xet(u,v+1);
        xet(u,v-1);
        a[u][v]='.';
        a[1][1]='.';
        q.pop();
    }
    g.push_front(make_pair(-1,1));
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        cin>>a[i][j];
    duyet();
    while(g.empty()!=1){
    p1=g.front();
    u=p1.first;
    v=p1.second;
    if(u==-1 && v==1){
        dem++;
        if(isok()==1) g.push_back(make_pair(-1,1));
    }
        xet2(u+1,v);
        xet2(u-1,v);
        xet2(u,v+1);
        xet2(u,v-1);
        a[u][v]='.';
        g.pop_front();
    }
    cout<<dem;
 }

