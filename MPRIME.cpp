#include<iomanip>
#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int A[1000000]={0},B[1000000],C[1000000],n,x;
int j,dem=0;
void nguyento(int A[],int n)
{
    int i;
    A[0]=A[1]=1;
    for(int i=2;i<=sqrt(n);++i)
    {
         j=i*i;
        if(A[j]!=1)
        {
            while(j<=n)
                {
                    A[j]=1;
                    j+=i;
                }
        }
    }
}
int kiemtra(int x)
{
    int i;
   int b=sqrt(x);
    if(x<2)
        return 0;
    else
    for(i=3;i<b;i++)
    {
        if(x%i==0)
            return 0;
        else
        return 1;
    }


}
int main()
{
    int i, n=10000;
    nguyento(A,n);
    int j=1,dem2=0;
 for(int i=1;i<=n;++i)
    {
        if(A[i]==0)
        {
            dem2++;
            B[j]=i;
            j++;
        }
    }
  //  cout<<endl;
  //  for(i=1;i<=dem2;i++)
    //    cout<<B[i]<<" ";
   // cout<<endl<<"----------------------------------------------------------"<<endl;
    int q=1;
    for(i=1;i<=dem2;i=i+2)
        {
            int c=B[i];
            if(c<=9)
            {
                C[q]=B[i]*10+B[i+1];
                q++;
            }
            if(c>10&&c<100)
            {
                C[q]=B[i]*100+B[i+1];
                q++;
            }
            if(c>100&&c<1000)
            {
                C[q]=B[i]*1000+B[i+1];
                q++;
            }
            if(c>1000&&c<10000)
            {
                C[q]=B[i]*10000+B[i+1];
                q++;
            }
            if(c>10000&&c<100000)
            {
                C[q]=B[i]*100000+B[i+1];
                q++;
            }
            if(c>100000&&c<1000000)
            {
                C[q]=B[i]*1000000+B[i+1];
                q++;
            }
            if(c>1000000&&c<10000000)
            {
                C[q]=B[i]*1000000+B[i+1];
                q++;
            }
        }
    for(i=1;i<=dem2/2;i++)
        {
            cout<<C[i]<<" ";
        }
}

