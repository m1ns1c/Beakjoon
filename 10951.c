#include <stdio.h>

int main() {
    int A, B;

    // 테스트 케이스 입력 받기
    while (scanf("%d %d", &A, &B) != EOF) {
        // A와 B를 더한 값을 출력
        printf("%d\n", A + B);
    }

    return 0;
}
