#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
    for(int i = 0; i < query.size(); i++)
    {
        vector<int> temp;
        
        if(i % 2 == 0)
        {   // 짝수
            for(int j = 0; j <= query[i]; j++)
            {
                temp.push_back(arr[j]);
            }
        }
        else
        {   // 홀수
            for(int j = query[i]; j < arr.size(); j++)
            {
                temp.push_back(arr[j]);
            }
        }
        
        arr = temp;
    }
    
    return arr;
}