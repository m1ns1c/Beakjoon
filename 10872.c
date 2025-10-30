#include <stdio.h>

int main(void)
{
    int num;
    int num2 = 1;
    scanf("%d", &num);
    if(num < 1)
    {
        printf("1\n");
    }
    else
    {
        for(int i = 1; i < num + 1; i++)
        {
            num2 *= i;
        }
        printf("%d\n", num2);
    }
    return 0;
}
