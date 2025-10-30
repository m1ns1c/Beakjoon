#include <stdio.h>
#include <math.h>

int main(void)
{
    int n1, n2, n3;
    int num = 0;
    int minjae[10000];
    
    while (1)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        
        if (n1 == 0 && n2 == 0 && n3 == 0)
        {
            break;
        }
        
        int max = n1;
        int sum = n2 * n2 + n3 * n3;
        
        if (n2 > max)
        {
            max = n2;
            sum = n1 * n1 + n3 * n3;
        }
        
        if (n3 > max)
        {
            max = n3;
            sum = n1 * n1 + n2 * n2;
        }
        
        if (max * max == sum)
        {
            minjae[num] = 1;
        }
        else
        {
            minjae[num] = 0;
        }
        
        num++;
    }
    
    for (int i = 0; i < num; i++)
    {
        if (minjae[i] == 1)
        {
            printf("right\n");
        }
        else if (minjae[i] == 0)
        {
            printf("wrong\n");
        }
    }
    
    return 0;
}
