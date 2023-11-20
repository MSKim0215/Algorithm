#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> copy_emergency = emergency;
    
    sort(copy_emergency.begin(), copy_emergency.end(), greater<>());     // 내림차순
    
    map<int, int> emergencyMap;
    int count = 1;
    
    for(int i = 0; i < copy_emergency.size(); i++)
    {
        if(emergencyMap.find(copy_emergency[i]) == emergencyMap.end())
        {
            emergencyMap[copy_emergency[i]] = count;
        }
        count++;
    }
    
    vector<int> answer;
    
    for(int i = 0; i < emergency.size(); i++)
    {
        answer.push_back(emergencyMap[emergency[i]]);
    }
    
    return answer;
}