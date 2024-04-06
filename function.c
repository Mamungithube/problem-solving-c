//return+peramiter

#include <stdio.h>
int fun(int x,int y)
{
    int sum=x-y;
    return sum;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=fun(a,b);
    printf("%d",c);
   return 0;
} 

//retun + no peramiter

#include <stdio.h>
int fun()
{
    int a=40;
    int b=50;
    int sum=a+b;
}
int main() {
    int c = fun();
    printf("%d",c);
   return 0;
} 

//No return + peramiter

#include <stdio.h>
void fun(int x,int y)
{
    int sum=x-y;
    printf("%d",sum);
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    
   return 0;
} 

//no return + no peramiter

#include <stdio.h>
void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int total=a+b;
    printf("%d",total);
}
int main() {
   
    sum ();
   return 0;
} 