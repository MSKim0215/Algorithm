#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;
    int targetNumber = n;
    
    answer.push_back(targetNumber);
    
    while(true)
    {
        if(targetNumber <= 1) break;
        
        if(targetNumber % 2 == 0)
        {
            targetNumber /= 2;
        }
        else
        {
            targetNumber = targetNumber * 3 + 1;
        }
        
        answer.push_back(targetNumber);
    }
    
    return answer;
}