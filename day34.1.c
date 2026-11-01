Insert an element in an array at a given position.


#include <stdio.h>

int main() {
    int a[100], n, pos, value, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &pos, &value);

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = value;

    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}