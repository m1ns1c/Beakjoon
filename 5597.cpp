#include <stdio.h>

int main(void)
{
    int sub[30] = {0};
    int mis[2] = {0};

    for (int i = 0; i < 28; ++i)
    {
        int num;
        scanf("%d", &num);
        sub[num - 1] = 1;
    }
    int count = 0;
    for (int i = 0; i < 30; ++i)
    {
        if (sub[i] == 0)
        {
            mis[count] = i + 1;
            count++;
        }

        if (count == 2)
            break;
    }

    printf("%d\n%d\n", mis[0], mis[1]);

    return 0;
}
