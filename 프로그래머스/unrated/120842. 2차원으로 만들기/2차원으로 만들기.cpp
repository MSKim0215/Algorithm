#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) 
{
    int targetNum = num_list.size() / n;
    int index = 0;
    
    vector<vector<int>> answer;
    
    for(int i = 0; i < targetNum; i++)
    {
        vector<int> temp;
    
        for(int j = 0; j < n; j++)
        {
            temp.push_back(num_list[index]);
            index++;
        }
        
        answer.push_back(temp);
    }
    
    return answer;
}