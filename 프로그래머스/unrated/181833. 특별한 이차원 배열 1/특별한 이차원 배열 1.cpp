#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer;
    
    for(int i = 0; i < n; i++)
    {
        vector<int> temps;
        
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                temps.push_back(1);
            }
            else
            {
                temps.push_back(0);
            }
        }
        
        answer.push_back(temps);
    }
    
    return answer;
}