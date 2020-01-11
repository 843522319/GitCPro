#include <iostream>
#include <cstdio>

int main()
{
    int start[10005] = {0}; //求导之前
    int end[10005] = {0};   // 求导之后
    int k, e, n = 1, count = 0;
    while (scanf("%d%d", &k, &e) != EOF)
    {
        start[e] = k;
        n++;
    }
    // 求导
    for (int i = 0; i < n - 1; i++)
    {
        end[i] = start[i + 1] * (i + 1);
        if(end[i] != 0)
            count++; //导数不为0项个数
    }
    if(count == 0)
        printf("0 0");
    else
    {
        for(int i = n - 2; i >= 0; i--)
        {
            if(end[i] != 0)
            {
                printf("%d %d", end[i], i);
                if (i > 0)
                {
                    printf(" ");
                }  
            }
            
            
        }
    }
    
    
    system("pause");
    return 0;
}