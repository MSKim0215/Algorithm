#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park)
{
    int maxMatSize = -1;
    
    sort(mats.begin(), mats.end(), greater<int>());
    
    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[i].size(); j++)
        {
            if(park[i][j] == "-1")
            {   // 빈 공간일 경우
                for(int k = 0; k < mats.size(); k++)
                {
                    int targetMatSize = mats[k];
                    
                    if(i + targetMatSize > park.size() || j + targetMatSize > park[i].size())
                    {   // 돗자리가 공원 밖으로 나갈 경우
                        continue;
                    }
                    
                    bool canPlace = true;
                    for(int y = i; y < i + targetMatSize; y++)
                    {
                        for(int x = j; x < j + targetMatSize; x++)
                        {
                            if(park[y][x] != "-1")
                            {
                                canPlace = false;
                                break;
                            }
                        }
                        
                        if(!canPlace) break;
                    }
                    
                    if(canPlace && targetMatSize > maxMatSize)
                    {
                        maxMatSize = targetMatSize;
                    }
                }
            }
        }
    }
    
    return maxMatSize;
}