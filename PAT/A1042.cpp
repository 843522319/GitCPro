#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    /*
    0-53 每个数字代表一个牌，S1,S2...S13,.....J1,J2
    */
    char shuffle[5] = {'S', 'H', 'C', 'D', 'J'};
    int shufflePos[54] = {0}; // 操作前卡牌位置
    int tempPos[54] = {0};    // 存放卡牌要放置的位置
    int changePos[54] = {0};  // 操作后卡牌位置
    int n = 54;
    int ind;
    int timeN, inPos;
    scanf("%d", &timeN);
    for (int i = 0; i < n; i++)
    {
        shufflePos[i] = i; // 初始化位置编号
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inPos);
        tempPos[i] = inPos - 1;
    }
    while (timeN--)
    {
        for (int i = 0; i < n; i++)
        {
            changePos[tempPos[i]] = shufflePos[i];
        }
        for (int i = 0; i < n; i++)
        {
            shufflePos[i] = changePos[i]; // 更新卡牌位置
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(shufflePos[i] < 13)
        {
            printf("%c%d", shuffle[0], shufflePos[i] + 1);
        }
        else if(shufflePos[i] >= 13 && shufflePos[i] < 26)
        {
            printf("%c%d", shuffle[1], (shufflePos[i] % 13) + 1);
        }
        else if(shufflePos[i] >= 26 && shufflePos[i] < 39)
        {
            printf("%c%d", shuffle[2], (shufflePos[i] % 13) + 1);
        }
        else if(shufflePos[i] >= 39 && shufflePos[i] < 52)
        {
            printf("%c%d", shuffle[3], (shufflePos[i] % 13) + 1);
        }
        else if(shufflePos[i] >= 52 && shufflePos[i] < 54)
        {
            printf("%c%d", shuffle[4], (shufflePos[i] % 2) + 1);
        }
        
        if(i < n-1)
        {
            printf(" ");
        }
    }
    system("pause");
    return 0;
}