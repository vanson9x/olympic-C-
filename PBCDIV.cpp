#include "stdio.h"

long long a, b, s;

long long L2(int x)
{
    return (b/x)-((a-1)/x);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        s=L2(12)+L2(30)-(2*L2(60));
        printf("%lld\n",s);
    }
    return 0;

}
