#include "iostream"
#include "string.h"
#include "stdio.h"
#include "stack"
using namespace std;

stack <char> s;
char c[300],kt;
string x="";

void kt_R(string x)
{
   int j,w,z,dz,f;
   j=w=dz=f=-1;

   j=x.find('j');
   w=x.find('w');
   z=x.find('d');
   dz=x.find("dz");
   f=x.find('f');

   if(j!=-1)
    {
        x[j]='g';
        x.insert(j+1,"i");
    }
    else if(w!=-1)
        {
            x[w]='q';
            x.insert(w+1,"u");
        }
    else if(z!=-1)
        x[z]='d';
    else if(dz!=-1)
        x.erase(dz+1);
    else if(f!=-1)
    {
        x[f]='p';
        x.insert(f+1,"h");
    }
    cout<<x;
}
int kt_RW(string x)
{
    char kt[10][5]={"k","ko","ng","n","dc","hok","ntn","kq"};
    for(int i=0;i<8;i++)
        if(x==kt[i])
            return i;
    return -1;
}
void hien_RW(string x)
{
    int h=kt_RW(x);
    switch(h)
    {
        case 0: case 1: case 5: cout<<"khong"; break;
        case 2: case 3: cout<<"nguoi"; break;
        case 4: cout<<"duoc"; break;
        case 6: cout<<"nhu the nao"; break;
        case 7: cout<<"ket qua"; break;
        default: kt_R(x); break;
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
int main()
{
    int i,n;
    gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]<48 || c[i]==63)
           {
              s.push(c[i]);
              hien_RW(x);
              x="";
           }
        else
            x+=c[i];

        if(i==n-1)
        {
              hien_RW(x);
              x="";
        }
    }
}
