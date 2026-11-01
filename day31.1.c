Search for an element in an array using linear search.


#include <stdio.h>

int main()
{
    int n, i, a[100], search;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}