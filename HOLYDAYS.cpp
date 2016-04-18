#include "iostream"
#include "string.h"
#include "stdio.h"

using namespace std;

string thu="monday****tuesday***wednesday*thursday**friday****saturday**sunday****";
string thang="january***february**march*****april*****may*******june******july******august****september*october***november**december**";
string head="last*first";
int ngay_thang[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,31};
int ngay_dthang[15],kq[10000];

void mung1_thang(char s[])
{
    int i,du;
    for(i=2;i<=12;i++)
    {
        du=ngay_thang[i-1]%7;
        ngay_dthang[i]=ngay_dthang[i-1]+du;
        if(ngay_dthang[i]>8)
            ngay_dthang[i]=ngay_dthang[i]-7;
    }
}

int First(char s[],int t1, int t2)
{
    if(t1>=ngay_dthang[t2])
        return t1-ngay_dthang[t2]+1;
    else
        return 8 - (ngay_dthang[t2]-t1);
}
int Last(char s[], int t1, int t2)
{
    int temp=0;
    if(t1>ngay_dthang[t2+1])
        {
            temp=t1-ngay_dthang[t2+1];
            return ngay_thang[t2]-temp;
        }
    else if(t1==ngay_dthang[t2+1])
        return ngay_thang[t2]-6;
        else
            {
                temp=ngay_dthang[t2+1]-t1;
                return ngay_thang[t2]-temp+1;
            }
}

void Tim_ngay(int n, char s[])
{
    int i,t1,t2,temp;
     for(i=0;i<n;i++)
     {
         fflush(stdin);
         cin>>s;
         temp=head.find(s)/5;
         cin>>s;
         t1=thu.find(s)/10+2;
         cin>>s;
         cin>>s;
         t2=thang.find(s)/10+1;
         if(temp==1)
            kq[i]=First(s,t1,t2);
         else
            kq[i]=Last(s,t1,t2);
     }
}
void hien(int n)
{
    for(int i=0;i<n;i++)
        cout<<kq[i]<<endl;
}
int main()
{
    int n;
    char s[100];
    cin>>n;
    cin>>s;
    ngay_dthang[1]=thu.find(s)/10+2;
    cin>>s;
    if(s[strlen(s)-1]=='s')
        ngay_thang[2]+=1;
    mung1_thang(s);
    Tim_ngay(n,s);
    hien(n);
}
