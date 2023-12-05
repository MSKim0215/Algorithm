#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array)
{
    map<int, int> array_count;     // key: 숫자, value: 나온 횟수
    
    for(int i = 0; i < array.size(); i++)
    {
        if(array_count.find(array[i]) == array_count.end())
        {
            array_count.insert({array[i], 1});
        }
        else
        {
            array_count[array[i]]++;
        }
    }
    
    int maxCount = 0;
    int targetCount = 0;
    bool isEqual = false;
    
    for(auto iter = array_count.begin(); iter != array_count.end(); iter++)
    {
        if(iter->second == maxCount)
        {
            isEqual = true;
        }
        else if(iter->second > maxCount)
        {
            isEqual = false;
            
            maxCount = iter->second;
            targetCount = iter->first;
        }
    }
    
    if(isEqual) return -1;
    return targetCount;
}