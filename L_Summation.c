#include <stdio.h>
void rec(int ar[],int n,int i){
    if(i==n) return;
    else {
        int count=0;
        ar++;
    }
    printf("%d ",ar[i]);
    rec(ar,n,i+1);
}
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    rec(ar,n,0);
   return 0;
} 