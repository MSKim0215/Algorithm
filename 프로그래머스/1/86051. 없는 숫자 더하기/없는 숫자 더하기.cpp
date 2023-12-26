#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    
    map<int, bool> checkMap;
    for(int i = 0; i <= 9; i++)
    {
        checkMap.insert({i, false});
    }
    
    for(int i = 0; i < numbers.size(); i++)
    {
        if(checkMap.find(numbers[i]) != checkMap.end())
        {
            checkMap[numbers[i]] = true;
        }
    }
    
    int answer = 0;
    for(auto iter = checkMap.begin(); iter != checkMap.end(); iter++)
    {
        if(!iter->second)
        {
            answer += iter->first;
        }
    }
    
    return answer;
}