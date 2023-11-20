#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) 
{
    vector<int> answer;
    vector<int> totalScore, copyScore;
    
    // 1. 평균값 저장을 벡터에 저장
    for(int i = 0; i < score.size(); i++)
    {
        int sumScore = 0;
        
        for(int j = 0; j < score[i].size(); j++)
        {
            sumScore += score[i][j];
        }
        
        //int avgScore = sumScore / score[i].size();
        totalScore.push_back(sumScore);
        copyScore.push_back(sumScore);
    }
    
    // 2. 복사본 내림차순 정렬
    sort(copyScore.begin(), copyScore.end(), greater<>()); 
    
    map<int, int> scoreMap;
    int count = 1;
    
    // 3. 내림차순 순으로 등수와 평균값을 맵에 할당
    for(int i = 0; i < copyScore.size(); i++)
    {
        if(scoreMap.find(copyScore[i]) == scoreMap.end())
        {
            scoreMap[copyScore[i]] = count;
        }
        count++;
    }
    
    // 4. 등수에 맞춰서 맵에서 값을 가져옴
    for(int i = 0; i < totalScore.size(); i++)
    {
        answer.push_back(scoreMap[totalScore[i]]);
    }
    
    return answer;
}