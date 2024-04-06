#include <stdio.h>
#include <string.h>
int main() {
    char a[10001];
    int cnt[26]={0};
    scanf("%s",&a);
    for (int i=0;i<strlen(a);i++) 
    {
        if (a[i]>='a' && a[i]<='z') 
        {
            cnt[a[i]-'a']++;
        }
    }
    for (int i=0;i<26;i++) 
    {
        if (cnt[i]!=0) 
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
    }
    return 0;
}
