#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int n1 = num2 / 100;
    int n2 = (num2 % 100) / 10;
    int n3 = num2 % 10;
    printf("%d\n", num1 * n3);
    printf("%d\n", num1 * n2);
    printf("%d\n", num1 * n1);
    printf("%d\n", num1 * num2);
    return 0;
}
