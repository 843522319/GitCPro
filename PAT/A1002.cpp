#include <iostream>
#include <cstdio>

int main()
{
    double x1[1010] = {0}, t1;
    double x2[1010] = {0}, t2;
    int k, N = 0, x1N = 0, x2N = 0;
    scanf("%d", &k);
    while (k--)
    {
        if (N > x1N)
        {
            x1N = N;
        }
        scanf("%d%lf", &N, &t1);
        x1[N] = t1;
    }
    scanf("%d", &k);
    while (k--)
    {
        if (N > x2N)
        {
            x2N = N;
        }
        scanf("%d%lf", &N, &t2);
        x2[N] = t2;
    }
    if (x1N < x2N)
    {
        x1N = x2N;
    }
    // printf("%d ", x2N + 1);
    int noneZeroCount = x1N + 1;
    for (int i = x1N; i >= 0; i--)
    {
        x1[i] = x1[i] + x2[i];
        if (x1[i] == 0)
        {
            noneZeroCount--;
        }
    }
    printf("%d ", noneZeroCount);
    for (int i = x1N; i >= 0; i--)
    {
        if (x1[i] != 0)
        {
            printf("%d %.1f", i, x1[i]);

            if (i > 0)
            {
                printf(" ");
            }
        }
    }

    system("pause");
    return 0;
}