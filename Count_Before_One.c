#include <stdio.h>
int count_before_one(int A[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        if (A[i]== 1) 
        {
            return i;
        }
    }
    return n;
}
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int count = count_before_one(A, n);
    printf("%d\n", count);
    return 0;
}
