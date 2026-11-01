Rotate an array to the right by k positions.


#include <stdio.h>

int main() {
    int n, k, i, j;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(i = 1; i <= k; i++) {
        int last = a[n - 1];

        for(j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = last;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


