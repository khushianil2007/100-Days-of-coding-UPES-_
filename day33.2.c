Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main()
{
    int n, i, num;

    scanf("%d", &n);

    int a[n + 1];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    i = n - 1;

    while(i >= 0 && a[i] > num)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = num;

    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}