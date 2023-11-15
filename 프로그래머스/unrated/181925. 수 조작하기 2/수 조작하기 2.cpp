#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) 
{
    string answer = "";
    
    for(int i = 0; i < numLog.size() - 1; i++)
    {
        if(numLog[i] + 1 == numLog[i + 1])
        {   // 1보다 크다: w
            answer += 'w';
        }
        else if(numLog[i] - 1 == numLog[i + 1])
        {   // 1보다 작다: s
            answer += 's';
        }
        else if(numLog[i] + 10 == numLog[i + 1])
        {   // 10보다 크다: d
            answer += 'd';
        }
        else if(numLog[i] - 10 == numLog[i + 1])
        {   // 10보다 작다: a
            answer += 'a';
        }
    }
    
    return answer;
}