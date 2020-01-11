#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a, b, c;
    int T, caseOut[20] = {0};
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        if(a + b >c)
        {
            caseOut[i] = 1;
        }
        else
        {
            caseOut[i] = 0;
        }
        
    }
    for(int i = 0; i < T; i++)
    {
        if(caseOut[i] == 0)
            printf("Case #%d: false", i + 1);
        else printf("Case #%d: true", i + 1);
        if(i < T - 1)
        {
            printf("\n");
        }
    }
    system("pause");
    return 0;
}

