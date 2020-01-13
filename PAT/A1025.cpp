#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student
{  
    char id[15];
    int score;
    int locationNumber;
    int localRank;
}stu[30000];

bool cmp(Student a, Student b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
    {
        return strcmp(a.id, b.id) < 0;
    }
    
}

int main()
{
    int locationsNum = 1, T, eachLocationPeople, num = 0; //num考场人数
    scanf("%d", &T);
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &eachLocationPeople);
        for(int j = 0; j < eachLocationPeople; j++)
        {
            scanf("%s %d", stu[num].id, &stu[num].score);
            stu[num].locationNumber = i; //考场号
            num++;
        }
        sort(stu + num - eachLocationPeople, stu + num, cmp); 
        int rank1 = 1, rank2 = 1;
        stu[num - eachLocationPeople].localRank = rank1;
        for(int k = num - eachLocationPeople + 1; k < num; k++)
        {
            if(stu[k].score == stu[k - 1].score)
            {
                stu[k].localRank = rank1;
                rank2++;
            }
            else
            {
                rank2++;
                stu[k].localRank = rank2;
                rank1 = rank2;
            }
            
        }
    }
    printf("%d\n", num);
    sort(stu, stu + num, cmp);
    int r1 = 1, r2 = 1;
    printf("%s %d %d %d\n", stu[0].id, r1, stu[0].locationNumber, stu[0].localRank);
    for(int i = 1; i < num; i++)
    {
        if(stu[i].score == stu[i - 1].score)
        {
            printf("%s %d %d %d", stu[i].id, r1, stu[i].locationNumber, stu[i].localRank);
            r2++;
        }
        else
        {
            r2++;
            printf("%s %d %d %d", stu[i].id, r2, stu[i].locationNumber, stu[i].localRank);
            r1 = r2;
        }
        if(i < num - 1)
            printf("\n");
        
    }
    
    system("pause");
    return 0;
}