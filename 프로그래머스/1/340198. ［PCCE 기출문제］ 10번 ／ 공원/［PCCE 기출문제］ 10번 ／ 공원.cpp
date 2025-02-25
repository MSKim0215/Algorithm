#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class GroundData
{
    public:
        int X, Y;
        vector<int> widCounts;
    
        int GetMatSize() const
        {
            if(widCounts.empty()) return -1;
            
            int minWidth = widCounts[0];
            int maxSize = 1;
            
            for(int i = 1; i < widCounts.size(); i++)
            {
                minWidth = min(minWidth, widCounts[i]); // 현재 행까지의 최소 가로 길이 유지
                int squareSize = min(minWidth, i + 1); // 현재 높이(i+1)와 최소 너비 중 작은 값이 최대 정사각형 크기
                maxSize = max(maxSize, squareSize);
            }
            
            return maxSize;
        }
};

vector<GroundData> SetGroundDatas(vector<vector<string>> park)
{
    vector<GroundData> result;
    
    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[i].size(); j++)
        {   
            string groundType = park[i][j];
            
            if(groundType == "-1")
            {   // 1. 빈 공간의 x, y 좌표 값을 저장한다.
                GroundData groundData;
                groundData.X = i;
                groundData.Y = j;
                
                result.push_back(groundData);
            }
        }
    }
    
    return result;
}

int GetWidCount(int startX, int startY, vector<vector<string>> park)
{
    int widCount = 1;
    
    while(true)
    {
        int nextY = startY + 1;

        if(nextY >= park[startX].size() || park[startX][nextY] != "-1")
        {   
            return widCount;
        }
        else
        {
            widCount++;
            startY++;
        }
    }
}

int solution(vector<int> mats, vector<vector<string>> park) 
{
    vector<GroundData> groundDatas = SetGroundDatas(park);
    
    if(groundDatas.empty()) return -1;
    
    for(int i = 0; i < groundDatas.size(); i++)
    {
        int startX = groundDatas[i].X;
        int startY = groundDatas[i].Y;
        
        int widCount = GetWidCount(startX, startY, park);   
        groundDatas[i].widCounts.push_back(widCount);
        
        while(true)
        {
            int nextX = startX + 1;
            
            if(nextX >= park.size() || park[nextX][startY] != "-1")
            {   // 공원 밖으로 나가거나, 빈 공간이 아니면 탐색 중지
                break;
            }
            else
            {   // 그 외, 해당 라인 탐색 시작
                startX++;
                
                widCount = GetWidCount(startX, startY, park);
                groundDatas[i].widCounts.push_back(widCount);
            }
        }
    }
    
    vector<int> matSizes;
    for(const auto& groundData : groundDatas)
    {
        matSizes.push_back(groundData.GetMatSize());
    }
    
    if(matSizes.empty()) return -1;
    
    int maxMatSize = *max_element(matSizes.begin(), matSizes.end());
    sort(mats.begin(), mats.end(), greater<int>());
    
    for(int mat : mats)
    {
        if(mat <= maxMatSize) return mat;
    }
    
    return -1;
}