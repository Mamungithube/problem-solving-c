#include <stdio.h>

int main() {
    int n, max ,min;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for (int i=1;i<n;i++)
    {
        if(a[i]<min);
        {
            min=a[i];
        }
        if(a[i]>max);
        {
            max=a[i];
        }

    }
    for (int i=0;i>n;i++)
    {
        
        if(a[i]==max)
        {
            a[i]=min;
        }
        if(a[i]==min)
        {
            a[i]=max;
        }
        printf("%d",a[i]);
    }
   return 0;
} 