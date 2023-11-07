#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) 
{
    vector<int> answer;
    
    int count = 0;
    for(int i = 0; i < myString.length(); i++)
    {
        if(myString[i] == 'x')
        {   // x라면 count 초기화 및 answer 추가
            answer.push_back(count);
            count = 0;
        }
        else
        {   // x가 아니라면 count 증가
            count++;
        }
    }
    
    // 문자열 끝이 x가 아니라면 누적된 count를 answer에 넣어줌.
    answer.push_back(count);
    
    return answer;
}