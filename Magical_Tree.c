#include <stdio.h>
int main() 
{
    int n,k=1;
    scanf("%d",&n);
    int x;
    if(n==1){x=6;}
    if(n==3){x=7;}
    if(n==5){x=8;}
    if(n==7){x=9;}
    if(n==9){x=10;}
    if(n==11){x=11;}
    if(n==13){x=12;}
    if(n==15){x=13;}
    if(n==17){x=14;}
    if(n==19){x=15;}
    if(n==21){x=16;}
    int s=x-1;
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<s;j++)
        {
            printf(" ");
        } 
         for (int j=0;j<k;j++)
        {
            printf("*");
        } 
        s--;
        k=k+2;
        printf("\n");
    }
    int M=1;
    int N=n-1;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf(" ");
        } 
         for (int j=0;j<n;j++)
        {
            printf("*");
        } 
        N--;
        M=M+2;
        printf("\n");
    }
   return 0;
}