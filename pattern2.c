#include <stdio.h>
int main()
{
    int rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int j=i-1;j>0;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}