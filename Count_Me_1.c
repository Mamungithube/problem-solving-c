#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int cnt2=0,cnt3=0;
    for (int i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            cnt2++;
        }
        else if(A[i]%3==0)
        {
            cnt3++;
        }
    }
    printf("%d %d",cnt2,cnt3);
    return 0;
}