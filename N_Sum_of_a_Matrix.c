#include <stdio.h>

int main() {
    int row,colume;
    scanf("%d %d",&row,&colume);
    int a[row][colume],b[row][colume],c[row][colume];
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
            scanf("%d ",&b[i][j]);
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<colume;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<colume;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
} 