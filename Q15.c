#include <stdio.h>

int main()
{
    int n=5,m=1;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
          printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
           if(k==1 || k==m || m==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        m++;
    }
    return 0;
}
