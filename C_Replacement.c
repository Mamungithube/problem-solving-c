#include <stdio.h>

int main() {
   int i,n;
   scanf("%d",&n);
   int ar[n];
   for (int i=0;i<n;i++)
   {
     scanf("%d",&ar[i]);
     if (ar[i]>0)
     ar[i]=1;
     else if(ar[i]<0)
     ar[i]=2;
   }
   for (int i=0;i<n;i++)
   {
    printf("%d ",ar[i]);
   }
   
   return 0;
} 