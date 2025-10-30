#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    int positions[26];

    scanf("%s", word);

    for (int i = 0; i < 26; i++)
    {
        positions[i] = -1;
    }

    for (int i = 0; i < strlen(word); i++)
    {
        char c = word[i];
        if (positions[c - 'a'] == -1)
        {
            positions[c - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", positions[i]);
    }

    return 0;
}
