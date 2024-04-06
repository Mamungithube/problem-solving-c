#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);
    while (T--) 
    {
        scanf("%d", &N);
        int A[N];
        for (int i=0;i<N;i++) 
        {
            scanf("%d",&A[i]);
        }
        scanf("%d",&X);
        int cnt = 0;
        for (int i = 0;i<N;i++) 
        {
            if (A[i]==X) 
            {
                cnt=1;
                break;
            }
        }
        if (cnt) 
        {
            printf("YES\n");
        } else {
            printf("NO");
        }
    }
    return 0;
}
