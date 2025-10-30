#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    int i, sum = 0;
    for(i = 0; i <= num; i += 1)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}
