Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, start = 0;

    gets(s);

    for(i = 0; ; i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            int j;
            for(j = i - 1; j >= start; j--)
                printf("%c", s[j]);

            if(s[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        if(s[i] == '\0')
            break;
    }

    return 0;
}