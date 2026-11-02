Reverse a string.


#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 3; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}