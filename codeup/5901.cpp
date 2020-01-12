#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxN = 256;
int judge(char str[])
{
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i -1])
            return  0;  // 不是
    }
    return 1;
}

int main()
{
    
    char str[maxN];
    int flag;
    gets(str);
    flag = judge(str);
    if(flag == 0)
        printf("NO");
    else
    {
        printf("YES");
    }
    
    // puts(str);
    system("pause");
    return 0;
}