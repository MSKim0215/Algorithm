#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<string> strArr) 
{
    map<int, int> groups;
    
    for(int i = 0; i < strArr.size(); i++)
    {
        int strLength = strArr[i].length();
        
        map<int, int>::iterator iter;
        iter = groups.find(strLength);
        if(iter != groups.end())
        {
            groups[strLength]++;   
        }
        else
        {
            groups.insert({strLength, 1});
        }
    }
    
    int answer = 0;
    
    for(auto iter = groups.begin(); iter != groups.end(); iter++)
    {
        if(answer < iter->second)
        {
            answer = iter->second;
        }
    }
    
    return answer;
}