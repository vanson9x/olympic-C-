#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
using namespace std;
int dem_d[1005], d=0, dem=0;
char a[1005][1005];
int main(){
    int n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++){
        fflush(stdin);
        gets(a[i]);
    }
    int t,x,y;
    t=m;
   while(t<n){
        x=strlen(a[0]); y=strlen(a[t]);
        for(i=x,j=y;i>=0;--j,--i)
            if(a[0][i]==a[t][j])
                dem++;
            else break;
        dem_d[d]=dem-1; d++;
        dem=0;
        t=t+m;
    }
    int min1=dem_d[0];
  for(i=0;i<d;i++)
   if(min1>dem_d[i])
    min1=dem_d[i];
   cout<<min1;
}
