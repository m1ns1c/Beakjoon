#include <stdio.h>

int main(void) {
    int H, M, S, T;
    scanf("%d %d %d", &H, &M, &S);
    scanf("%d", &T);

    int total = H * 3600 + M * 60 + S;
    total += T;

    total %= 86400;              // 하루(24*60*60) 단위로 감싸기

    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;

    printf("%d %d %d\n", h, m, s);
    return 0;
}
