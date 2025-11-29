#include<stdio.h>
int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i=1; i<=rows; i++)
    {
        for(int j=1; j<=9;j++)
        {
            if(j%2==0)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
                
        }
        printf("\n");

            
            
    }
        
    
    return 0;
}