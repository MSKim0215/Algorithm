#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    
    int targetNum = 1;
    answer.push_back(targetNum);
    
    while(true)
    {
        if(targetNum >= n) break;
        
        if(n % targetNum == 0)
        {
            answer.push_back(n / targetNum);
        }
        targetNum++;
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}