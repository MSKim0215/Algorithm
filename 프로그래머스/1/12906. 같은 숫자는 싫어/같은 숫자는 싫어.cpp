#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int currNum = arr[0];
    answer.push_back(currNum);
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(currNum != arr[i])
        {
            currNum = arr[i];
            answer.push_back(currNum);
        }
    }
    
    return answer;
}