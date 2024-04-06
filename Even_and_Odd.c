#include <stdio.h>

void odd_even(void)
{
    int EVEN = 0, ODD = 0;
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            EVEN++;
        }
        else
        {
            ODD++;
        }
    }

    printf("%d %d\n", EVEN, ODD);
}

int main()
{

    odd_even();

    return 0;
}