#include<iostream>
#include<deque>
using namespace std;
deque<char> d;
int main(){
    char a[1000000],c;
    int i,x,y,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>c;
    d.push_front(c);
    for(i=0;i<n;i++){
        x=a[i];
        y=d.front();
     //   cout<<x<<"-"<<y<<"\t";
        if(x<=y)
            d.push_front(a[i]);
        if(x>y)
            d.push_back(a[i]);
    }
    while(!d.empty()){
        cout<<d.front();
        d.pop_front();
    }
}
