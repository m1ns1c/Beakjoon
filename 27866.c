#include <stdio.h>

int main(void)

{
    char name[1001];
    int num;
    
    scanf("%s", &name);
    scanf("%d", &num);
    
    printf("%c", name[num-1]);

    return 0;
}
