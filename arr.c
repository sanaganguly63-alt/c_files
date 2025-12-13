#include <stdio.h>
int main() 
{
    int n, i;
    int max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) 
        {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        }
    printf("Highest number = %d\n", max);
    printf("Lowest number  = %d\n", min);
    return 0;
}