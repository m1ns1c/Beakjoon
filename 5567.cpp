#include <stdio.h>
#include <stdbool.h>

#define MAXN 501

int n, m;
bool friends[MAXN][MAXN];
bool invited[MAXN];

int main(void) {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        friends[a][b] = true;
        friends[b][a] = true;
    }

    for (int i = 2; i <= n; ++i) {
        if (friends[1][i]) {
            invited[i] = true;
            for (int j = 2; j <= n; ++j) {
                if (friends[i][j])
                    invited[j] = true;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (invited[i])
            count++;
    }

    printf("%d\n", count);

    return 0;
}
