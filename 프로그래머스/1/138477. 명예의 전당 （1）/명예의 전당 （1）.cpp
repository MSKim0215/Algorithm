#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> owner;
    
    for(int i = 0; i < score.size(); i++)
    {
        if(answer.size() < k)
        {   // k일 전까지는 무조건 올라감
            owner.push_back(score[i]);
        }
        else
        {
            sort(owner.begin(), owner.end());
            
            for(int j = 0; j < owner.size(); j++)
            {
                if(score[i] > owner[j])
                {
                    owner[j] = score[i];
                    break;
                }
            }
        }
        
        sort(owner.begin(), owner.end());
        
        // 가장 낮은 점수 answer에 추가
        answer.push_back(owner[0]);
    }
    
    return answer;
}