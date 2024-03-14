#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i, n, pos, element, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found==1)
    {
        for (i=pos; i<n-1;i++)
	{
            a[i] = a[i+1];
        }

        for (i=0;i<n-1;i++)
        {
            printf("%d ", a[i]);
        }

    }
    else
    printf("Deletion not possible.");
} 