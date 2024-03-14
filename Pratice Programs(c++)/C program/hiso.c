#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[59], j, n, i;
    printf("enter the no:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    for (j = 0; j < a[i]; j++)
    {
        printf("*");
    }
    return 0;
}