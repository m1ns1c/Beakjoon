#include <stdio.h>

int main(void)
{
    int num1, num2;
    int total1[10000];
    int total2[10000];
    int length = 0;
    
    while(1)
    {
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 || num2 == 0)
        {
            break;
        }
        total1[length] = num1;
        total2[length] = num2;
        length++;
    }
    
    for(int i = 0; i < length; i++)
    {
        printf("%d\n", total1[i] + total2[i]);
    }
    return 0;
}
