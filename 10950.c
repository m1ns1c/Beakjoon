#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sums[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        sums[i] = a + b;
    }
    for (int j = 0; j < n; j++) {
        printf("%d\n", sums[j]);
    }
}
