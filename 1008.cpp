#include <stdio.h>

int main(void)
{
    double a, b, total;
    scanf("%lf %lf", &a, &b);
    total = a / b;
    printf("%.9lf\n", total);
}
