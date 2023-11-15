#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) 
{
    string answer = "";
    map<string, int> strMap;
    
    for(int i = 0; i < s.length(); i++)
    {
        string target = "";
        target += s[i];
        
        map<string, int>:: iterator iter;
        iter = strMap.find(target);
        
        if(iter != strMap.end())
        {   
            strMap[target]++;
        }
        else
        {
            strMap.insert({target, 1});
        }
    }
    
    for (auto iter = strMap.begin() ; iter != strMap.end(); iter++)
    {
        if(iter->second == 1)
        {
            answer += iter->first;
        }
    }
    
    return answer;
}