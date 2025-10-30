#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<0)
    {
        if(b<0)
        {
            printf("3");
        }
        else
        {
            printf("2");
        }
    }
    if(a>0)
    {
        if(b<0)
        {
            printf("4");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
