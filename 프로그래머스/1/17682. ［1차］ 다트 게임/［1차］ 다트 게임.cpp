#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string dartResult)
{   // 점수: 0 ~ 10, 보너스: S, D, T, 옵션: *(배), #(마이너스)
    vector<string> scoreVec;
    
    string result = "";
    for(int i = 0; i < dartResult.length(); i++)
    {
        if(dartResult[i] >= '0' && dartResult[i] <= '9')
        {   // 숫자일 경우
            if(result == "")
            {   // 최초 진입
                result += dartResult[i];
            }
            else
            {   // 이미 진입
                if(result[result.length() - 1] >= '0' && result[result.length() - 1] <= '9')
                {   // 만약 직전의 값이 숫자라면
                    result += dartResult[i];
                }
                else
                {   // 초기화
                    scoreVec.push_back(result);
                    result = dartResult[i];
                }
            }
        }
        else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T')
        {   // S, D, T 라면
            result += dartResult[i];
        }
        else if(dartResult[i] == '*' || dartResult[i] == '#')
        {   // *, # 라면
            result += dartResult[i];
        }
    }
    
    if(result != "")
    {
        scoreVec.push_back(result);
        result = "";
    }
    
    vector<int> scores;
    for(int i = 0; i < scoreVec.size(); i++)
    {
        string score = "";
        int num = 0;
        
        for(int j = 0; j < scoreVec[i].length(); j++)
        {
            if(scoreVec[i][j] >= '0' && scoreVec[i][j] <= '9')
            {
                if(score == "")
                {
                    score = scoreVec[i][j];
                }
                else if(score[score.length() - 1] >= '0' && score[score.length() - 1] <= '9')
                {
                    score += scoreVec[i][j];
                }
            }
            else
            {
                if(score != "")
                {
                    num = stoi(score);
                    score = "";
                }
                
                if(scoreVec[i][j] == 'D')
                {   // 2제곱
                    num = (num * num);
                }
                else if(scoreVec[i][j] == 'T')
                {   // 3제곱
                    num = (num * num * num);
                }
                else if(scoreVec[i][j] == '*')
                {   // 스타상
                    if(i == 0)
                    {   // 첫 번째일 경우,
                        num *= 2;
                    }
                    else
                    {   // 그 외, 이전 점수도 두배
                        scores[scores.size() - 1] *= 2;
                        num *= 2;
                    }
                }
                else if(scoreVec[i][j] == '#')
                {   // 아차상
                    num *= -1;
                }
            }
        }
        
        scores.push_back(num);
    }
    
    int answer = 0;
    
    for(int i = 0; i < scores.size(); i++)
    {
        answer += scores[i];
    }
    
    return answer;
}