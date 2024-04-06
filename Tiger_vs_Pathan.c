#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        char S[N];
        scanf("%s", &S);
        int tiger = 0, Pathaan = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'T')
            {
                tiger++;
            }
            else if (S[i] == 'P')
            {
                Pathaan++;
            }
        }
        
        if (tiger > Pathaan)
        {
            printf("Tiger\n");
        }
        else if (tiger < Pathaan)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }  
        return 0;
    
}