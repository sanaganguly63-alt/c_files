#include <stdio.h>
int main()
{
    int row, k=1;
    scanf("%d",&row);
    for(int i=row; i>=1; i++)
    {
        for(int j=row; j<=i;j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}