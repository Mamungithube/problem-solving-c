#include <stdio.h>
void fun(int T){
    // base case
    if(T==0) return;
    int x=T%10;
    fun(T/10);
    printf("%d ",x);
}
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    int T;
    scanf("%d",&T);
    fun(T);
    
    if(T==0)
    {
        printf("0");
    }
    printf("\n");
    }
   return 0;
} 