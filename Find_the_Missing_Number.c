#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);//0 * [ ] = 20%[]=0
        long long gun = (A * B * C);
        if (gun == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        
        }
        else
        {
            if (M % gun == 0)
            {
                long long D = M / gun;
                printf("%lld \n", D);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}