#include<iostream>
#include<queue>
using namespace std;
int n,x;
int fi(int n)
{
    int s = n;
       for(int i=2;i*i<=n;i++)
       {
         if (n % i == 0) s-=s / i;
         while (n % i == 0) n /= i;
       }
     if (n > 1)
       s -= s / n;
       return s;
}
int main()
{
    queue<int> q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.push(fi(x));
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
