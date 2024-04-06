#include <stdio.h>

int main() {
    int n;
    int pos=0,neg=0;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i] > 0)
        {
            pos += ar[i];
        }
        else
        {
            neg += ar[i];
        }
    }
    printf("%d ",pos);
    printf("%d ",neg);
   return 0;
} 