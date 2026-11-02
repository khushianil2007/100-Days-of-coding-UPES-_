Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], sum = 0;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        sum = sum + a[i][i];

    printf("%d", sum);

    return 0;
