#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int ar[n];
  for (int i=0;i<n;i++) 
  {
    scanf("%d",&ar[i]);
  }
  for (int i=0;i<n;i++) 
  {
    prinf("%d",ar[i]);
  }
  int sum;
  for(int i=0;i<n;i++)
  {
    sum=sum+ar[i];
  }
  printf("%d\n",sum);
  return 0;
} 