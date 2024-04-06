#include <stdio.h>

int main() {
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    if (sum<0)
    {
        sum=sum*-1;
    }
    printf("%lld",sum);
    return 0;
}
