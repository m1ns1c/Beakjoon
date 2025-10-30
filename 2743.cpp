#include <stdio.h>

int main(void)
{
    char name[101];
    scanf("%s", &name);
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    printf("%d", length);
}
