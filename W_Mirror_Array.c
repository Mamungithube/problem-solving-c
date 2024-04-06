#include <stdio.h>

int main() {
    int M,N;
    scanf("%d %d",&M,&N);
    int a[M][N];
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<M;i++)
    {
        for (int j=N-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   return 0;
} 