#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    char a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for (int i=0;i<strlen(a);i++)
    {
        int valu=a[i]-'a';
        cnt[valu]++;
    }
    for(int i=0;i<26;i++)
    printf("%d-%d\n",i,cnt[i]);
    
   return 0;
} 