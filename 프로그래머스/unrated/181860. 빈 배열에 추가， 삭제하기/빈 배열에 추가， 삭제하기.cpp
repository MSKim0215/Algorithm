#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag)
{
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(flag[i])
        {   // True라면 arr[i] x 2
            for(int j = 0; j < arr[i] * 2; j++)
            {
                answer.push_back(arr[i]);
            }
        }
        else
        {   // False라면 -arr[i]
           for(int j = 0; j < arr[i]; j++)
           {
               answer.erase(answer.begin() + answer.size() - 1);
           }
        }
    }
    
    return answer;
}