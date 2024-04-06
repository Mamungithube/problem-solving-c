#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    scanf("%s %s",a,b);
    int valu=strcmp(a,b);
    if(valu<0)
    {
        printf("%s",a);
    }
    else if(valu>0)
    {
        printf("%s",b);
    }
    else if(valu==0)
    {
        printf("%s",a);
    }
   return 0;
} 