#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("1\n"); // 윤년인 경우
    }
    else
    {
        printf("0\n"); // 윤년이 아닌 경우
    }
    
    return 0;
}
