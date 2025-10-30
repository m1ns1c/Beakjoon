#include <stdio.h>

int main(void)
{
    int count;
    int a[100], b[100], temp[100];
    scanf("%d", &count);
    for(int i = 1; i <= count; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for(int j = 1; j <= count; j++)
    {
        printf("Case #%d: %d + %d = %d\n", j, a[j], b[j], a[j] + b[j]);
    }
    return 0;
}

