#include <stdio.h>

int main(void)
{
    int numCount;
    int num[10000];
    int foundNum;
    
    int foundCount = 0;
    
    
    scanf("%d", &numCount);
    
    for(int i = 0; i < numCount; i++)
    {
        scanf("%d ", &num[i]);
    }
    
    scanf("%d", &foundNum);
    
    for(int i = 0; i < numCount; i++)
    {
            if(num[i] == foundNum)
            {
                foundCount++;
            }
    }
    
    
    printf("%d\n", foundCount);
    
    return 0;
}
