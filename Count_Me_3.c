#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char S[10000];
        scanf("%s",&S);
        int cap_le=0,sm_le=0,digit=0;
        for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]>='A'&&S[i]<='Z')
        {
            cap_le++;
        }  
        else if(S[i]>='a'&&S[i]<='z')
        {
            sm_le++;
        }   
        else
        {
            digit++;
        }
    }
    
        printf("%d %d %d\n",cap_le,sm_le,digit);
    }
   return 0;
} 