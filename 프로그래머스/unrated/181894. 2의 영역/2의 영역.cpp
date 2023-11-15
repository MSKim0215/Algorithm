#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int startIndex = arr.size() - 1;     // 시작 인덱스
    int endIndex = 0;       // 마지막 인덱스
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            if(startIndex > i)
            {
                startIndex = i;
            }
            
            if(endIndex < i)
            {
                endIndex = i;
            }
        }
    }
    
    if(endIndex == 0)
    {
        answer.push_back(-1);
        return answer;
    }
    
    for(int i = startIndex; i <= endIndex; i++)
    {
        answer.push_back(arr[i]);
    }
    
    return answer;
}