#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s[100][100];
    int num = 0;
    while(scanf("%s", &s[num]) != EOF)
    {
        num++;
    }
    for(int i = num - 1; i >= 0; i--)
    {
        printf("%s", s[i]);
        if(i > 0)
            printf(" ");
    }
    // printf("%s",s);
    system("pause");
    return 0;
}