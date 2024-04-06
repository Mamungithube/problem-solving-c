#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int tmp = B[i];
                    B[i] = B[j];
                    B[j] = tmp;
                }
            }
        }
        int C[N];
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
            printf("%d ",C[i]);
        }
        if(C[N]<0)
        for (int i = 0; i < N; i++)
        {
            printf("%d ",C[i]*-1);
        }
        printf("\n");
    }
    return 0;
}
