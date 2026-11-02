Perform diagonal traversal of a matrix.


#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int k = 0; k < r + c - 1; k++) {
        if (k % 2 == 0) {
            for (int i = k; i >= 0; i--) {
                int j = k - i;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (int i = 0; i <= k; i++) {
                int j = k - i;
                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}