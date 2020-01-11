#include <iostream>
#include <cstdio>
using namespace std;
int getDistance(int a[], int b, int c, int n)
{
    int sumDZ = 0, sumDF = 0;
    
    
    for (int i = 0; i < n; i++)
    {
        if(i >= b && i < c)
        {
            sumDZ += a[i];
        }
        else
        {
            sumDF += a[i];
        }
        
        
    }
    if(sumDF > sumDZ) return sumDZ;
    else return sumDF;
        
    
    
    
}

int main()
{
    
    int Vn, distance[100000] = {0};
    scanf("%d", &Vn);
    for(int i = 0; i < Vn; i++)
    {
        scanf("%d", &distance[i]);
    }
    int qn, shortDQ[10000] = {0};
    int shortestD[10000] = {0};
    int tempN;
    scanf("%d", &qn);
    for(int i = 0; i < qn * 2; i++)
    {
        scanf("%d", &tempN);
        shortDQ[i] = tempN - 1;
    }
    for(int i = 0, j = 0; i < qn * 2; i += 2, j++)
    {
        // 序号小的位置在前，否则交换
        if(shortDQ[i] < shortDQ[i + 1])
        {
            shortestD[j] = getDistance(distance, shortDQ[i], shortDQ[i + 1], Vn);
        }
        else
        {
            shortestD[j] = getDistance(distance, shortDQ[i + 1], shortDQ[i], Vn);
        }
        
        
    }
    for(int i = 0; i < qn; i++)
    {
        printf("%d", shortestD[i]);
        if (i < qn -1)
        {
            printf("\n");
        }
        
    }
    system("pause");
    return 0;
}