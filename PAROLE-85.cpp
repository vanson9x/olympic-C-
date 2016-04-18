#include "iostream"
#include "string.h"
#include "stdint.h"
#include "stdlib.h"

using namespace std;

int64_t h=10, a[10000000], b[100000000];
char s[10000000];

void bam_xuoi(char s[])
{
    a[0]=s[0]-48;
    for(int i=1;i<strlen(s);i++)
        a[i]=a[i-1]*h+s[i]-48;
}
void bam_nguoc(char s[])
{
    int l=strlen(s)-1,j;
    b[0]=s[l]-48;
    for(int i=l-1,j=1;i>=0;j++,i--)
        b[j]=b[j-1]*h+s[i]-48;
}
int64_t luythua(int x)
{
    int64_t s=1;
    for(int i=0;i<x;i++)
        s=s*h;
    return s;
}
void timkiem(int64_t a[], int64_t b[])
{
    int i,j,temp,x=0,y=0;
    if(s[0]==s[strlen(s)-1])// Truong hop dac biet
    {
        cout<<s; exit(0);
    }
    else
    {
        temp=b[strlen(s)-1];
        for(i=strlen(s)-1;i>1;i--)
        {
            temp-=((s[i]-48)*luythua(i));
           // cout<<temp<<" ";
            if(a[i-1]==temp) x=i-1;
        }

            temp=a[strlen(s)-1];
        for(i=1,j=strlen(s)-1;i<strlen(s)-1;j--,i++)
        {
            temp-=((s[i-1]-48)*luythua(j));
            if(temp==b[j-1]) y=j-1;
        }
    }
    if(x>=y)
    {
       // cout<<"*";
        for(i=strlen(s)-1;i>x;i--)
            cout<<s[i];
        cout<<s;
    }
    else if(s[strlen(s)-1]==s[strlen(s)-2])
    {
        for(i=0;i<strlen(s)-1;i++)
            cout<<s[i];
        for(i=strlen(s)-3;i>=0;i--)
            cout<<s[i];
    }
    else
    {
        cout<<s;
        for(i=y;i>=0;i--)
            cout<<s[i];
    }
}

int main()
{
        cin>>s;
        bam_xuoi(s);
        bam_nguoc(s);
        timkiem(a,b);
}
