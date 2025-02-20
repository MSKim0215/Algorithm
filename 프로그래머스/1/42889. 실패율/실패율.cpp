#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

class StageData
{
    public:
        int stopCount = 0;      // 현재 스테이지에 멈춘 사용자 수
        int passCount = 0;      // 현재 스테이지를 깬 사용자 수
    
        float GetFailurePercent() const
        {
            if(stopCount == 0) return 0;
            return (float)stopCount / passCount;
        }
};

bool comp(const pair<int, StageData>& a, const pair<int, StageData>& b)
{
    if (a.second.GetFailurePercent() != b.second.GetFailurePercent())
    {   // 실패율이 높은 순서로 정렬
        return a.second.GetFailurePercent() > b.second.GetFailurePercent();
    }
        
    // 실패율이 동일하면 스테이지 번호 오름차순
    return a.first < b.first;
}

vector<int> solution(int N, vector<int> stages) 
{
    int userCount = stages.size();   // 사용자 수
    map<int, StageData> failureMap;        // 스테이지, 스테이지 데이터
    
    // 1. 스테이지 사용자 도달 인원 맵 생성
    for(int i = 1; i <= N; i++)
    {
        StageData data;
        failureMap.insert(pair<int, StageData>(i, data));
    }
    
    // 2. 스테이지 사용자 도달 인원 체크
    for(int i = 0; i < userCount; i++)
    {
        int nowStage = stages[i];   // 현재 스테이지

        for(int j = 1; j <= nowStage; j++)
        {
            failureMap[j].passCount++;
        }
        
        failureMap[nowStage].stopCount++;
    }
    
    // 3. 실패율에 따라 오름차순으로 정렬
    vector<pair<int, StageData>> failureVec(failureMap.begin(), failureMap.end());
    sort(failureVec.begin(), failureVec.end(), comp);
    
    // 4. 만약 실패율이 동일하다면, 스테이지를 기준으로 오름차순 정렬
    vector<int> answer;
    for(const auto& pair : failureVec)
    {
        if(pair.first > N) continue;
        
        answer.push_back(pair.first);
    }
    
    return answer;
}