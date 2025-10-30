#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int min = INT_MAX;  // 최솟값을 저장할 변수, 초기값은 최댓값으로 설정
    int max = INT_MIN;  // 최댓값을 저장할 변수, 초기값은 최솟값으로 설정
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        // 현재 입력된 수와 최솟값, 최댓값을 비교하여 갱신
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    
    printf("%d %d\n", min, max);
    
    return 0;
}
