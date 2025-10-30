#include <stdio.h>

int main(void)
{
    int a, b, c;
    int add[1000000];
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        add[i] = b + c;
    }
    for(int i = 0; i < a; i++)
    {
        printf("%d\n",add[i]);
    }
    return 0;
}
