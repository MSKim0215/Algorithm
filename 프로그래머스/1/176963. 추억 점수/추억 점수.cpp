#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    // name: 그리워하는 사람의 이름 배열
    // yearning: 각 사람별 그리움 점수를 담은 정수 배열
    // photo: 각 사진에 찍힌 인물의 이름을 담은 배열
    
    vector<int> answer;
    
    // 1. 이름과 점수 맵으로 초기화
    map<string, int> scoreMap;
    for(int i = 0; i < name.size(); i++)
    {
        scoreMap.insert({name[i], yearning[i]});
    }
    
    // 2. 사진에 있는 사람들의 점수 계산
    for(int i = 0; i < photo.size(); i++)
    {
        int score = 0;
        
        for(int j = 0; j < photo[i].size(); j++)
        {
            if(scoreMap.find(photo[i][j]) != scoreMap.end())
            {
                score += scoreMap[photo[i][j]];        
            }
        }
        
        answer.push_back(score);
    }
    
    return answer;
}