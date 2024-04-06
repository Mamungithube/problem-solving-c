#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s,100,stdin);
    int len = strlen(s);
    if (len <= 10) 
    {
        printf("%s\n", s);
    } 
    else 
    {
        printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
    }
    return 0;
}
