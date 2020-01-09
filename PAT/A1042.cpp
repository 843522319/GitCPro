#include <iostream>
#include <cstdio>
using namespace std;

int getIndex(int a[], int n, int findElement)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == findElement)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int shufflePos[54] = {0}; // 卡牌位置
    int tempPos[54] = {0};    // 临时存放要卡牌要放置的位置
    int changePos[54] = {0};  // 映射
    int n = 54;
    int ind;
    int timeN, inPos;
    scanf("%d", &timeN);
    for (int i = 0; i < n; i++)
    {
        shufflePos[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inPos);
        tempPos[i] = inPos - 1;
    }
    for (int i = 0; i < n; i++)
    {
        changePos[tempPos[i]] = shufflePos[i];
    }
    for (int i = 0; i < n; i++)
    {
        ind = getIndex(changePos, n, i);
        if (ind != -1)
        {
            shufflePos[i] =  ind;
        }
        
    }

    // string str = "";
    // char a = 'A';

    // printf("%c%d", a, 1);
    system("pause");
    return 0;
}