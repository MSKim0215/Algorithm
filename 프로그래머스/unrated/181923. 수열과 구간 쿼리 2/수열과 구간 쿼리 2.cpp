#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++)
    {
        int minValue = 1000000;
        
        for(int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if(arr[j] > queries[i][2])
            {
                if(minValue > arr[j])
                {
                    minValue = arr[j];
                }
            }
        }
        
        if(minValue == 1000000)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(minValue);
        }
    }
    
    return answer;
}