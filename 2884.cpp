#include <stdio.h>

int main(void)
{
    int h, m, temp, finish, a;
    scanf("%d %d", &h, &m);
    if(h>=0 && h<=23)
    {
        if(m>=0 && m <= 59)
        {
            if(h == 0)
            {
                h=24;
            }
            
            h = h * 60;
            temp = h+m;
            temp = temp - 45;
            finish = temp / 60;
            a = temp % 60;
            if(finish == 24)
            {
                finish = 0;
            }
            printf("%d %d", finish, a);
        }
    }
    return 0;
}
