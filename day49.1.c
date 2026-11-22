Print the initials of a name.

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    fgets(name, 100, stdin);

    printf("%c.", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}