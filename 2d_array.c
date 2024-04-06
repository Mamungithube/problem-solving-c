#include <stdio.h>

int main() {
    int row,colume;
    scanf("%d %d",&row,&colume);
    int a[row][colume];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<colume;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    
    }
    
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<colume;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }    
    
    
   return 0;
} 