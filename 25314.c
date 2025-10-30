#include <stdio.h>

int main(void)
{
    int num, count;
    scanf("%d", &num);
    count = num / 4;
    for(int i = 1; i <= count; i++)
    {
        printf("long ");
    }
    printf("int");
    return 0;
}
