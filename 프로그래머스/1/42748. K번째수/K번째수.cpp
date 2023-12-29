#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        int startIndex = commands[i][0];
        int endIndex = commands[i][1];
        int returnIndex = commands[i][2];
        
        vector<int> value;
        for(int j = startIndex; j <= endIndex; j++)
        {
            int target = array[j - 1];
            value.push_back(target);
        }
        
        sort(value.begin(), value.end());
    
        answer.push_back(value[returnIndex - 1]);
    }
    
    return answer;
}