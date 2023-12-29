#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";
    
    map<int, int> foodMap;      // key: 음식 번호, value: 음식 개수
    for(int i = 1; i < food.size(); i++)
    {
        int value = food[i] / 2;
        foodMap.insert({i, value});
    }
    
    for(auto iter = foodMap.begin(); iter != foodMap.end(); iter++)
    {
        for(int i = 0; i < iter->second; i++)
        {
            answer += to_string(iter->first);
        }
    }
    
    answer += "0";
    
    for(auto iter = foodMap.rbegin(); iter != foodMap.rend(); iter++)
    {
        for(int i = 0; i < iter->second; i++)
        {
            answer += to_string(iter->first);
        }
    }
    
    return answer;
}