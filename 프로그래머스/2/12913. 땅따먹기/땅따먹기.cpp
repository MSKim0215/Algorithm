#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> land)
{
    for (int i = 1; i < land.size(); i++)
    {
        for (int j = 0; j < land[i].size(); j++)
        {
            int maxPrev = 0;
            
            for (int k = 0; k < land[i - 1].size(); k++)
            {
                if (k != j)
                { // 이전 행에서 최대값을 찾되, 현재 인덱스 j는 제외
                    maxPrev = max(maxPrev, land[i - 1][k]);
                }
            }
    
            land[i][j] += maxPrev;
        }
    }

    return *max_element(land[land.size() - 1].begin(), land[land.size() - 1].end());
}