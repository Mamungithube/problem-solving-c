#include <stdio.h>

int main() {
    int N,K;
    scanf("%d %d",&N,&K);
    int ar[K];
    for (int i=0;i<=K;i++)
        {
            ar[i]=i+1;
        }
     for (int i = 0; i < N; i++) 
     {
        for (int j = 0; j < K; j++)
        {
            printf("%d ", ar[j]);
        }
        printf("\n");
    }
     return 0;
}