#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= 1 && a <= 6 && b >= 1 && b <= 6 && c >= 1 && c <= 6)
    {
        if(a==b && b==c && a==c)
        {
            printf("%d", 10000 + a * 1000);
        }
        if(a==b && b != c)
        {
            printf("%d", 1000 + a * 100);
        }
        if(b!=c && a==c)
        {
            printf("%d", 1000 + a * 100);
        }
        if(a!=b && b==c)
        {
            printf("%d", 1000 + b * 100);
        }
        if(a != b && b != c && a != c)
        {
            if(a>b && a>c)
            {
                printf("%d", a*100);
            }
            if(b>a && b>c)
            {
                printf("%d", b*100);
            }
            if(c>a && c>b)
            {
                printf("%d", c*100);
            }
        }
    }
    return 0;
}
