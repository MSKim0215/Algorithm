#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;
    
    while(true)
    {
        if(n <= 1) break;
        
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0)
            {
                answer.push_back(i);
                n /= i;
                break;
            }
        }
    }
    
    // 중복되지 않은 값들을 정렬한 뒤, 중복된 값들을 모두 제거한다.
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}