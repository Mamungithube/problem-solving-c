#include <stdio.h>
void rec(int n){
    if(n==0) return;
    rec(n-1);
    printf("I love Recursion\n");
    }
    
int main() {
    int n;
    scanf("%d",&n);
    rec(n);
   return 0;
} 