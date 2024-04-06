#include <stdio.h>
#include <string.h>
int is_palindrome(char *ar) 
{
    int len = strlen(ar);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (ar[i] != ar[j])
        return 0;
    }
    return 1;
}
int main() {
    char ar[1001];
    scanf("%s",ar);
    if (is_palindrome(ar))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
