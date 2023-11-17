#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    map<int, bool> numbers;
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++)
    {
        map<int, bool>::iterator iter;
        iter = numbers.find(arr[i]);
        if(iter == numbers.end())
        {
            numbers.insert({arr[i], true});
            answer.push_back(arr[i]);
        }
        
        if(answer.size() == k) break;
    }
    
    if(answer.size() < k)
    {
        int count = k - answer.size();
        for(int i = 0; i < count; i++)
        {
            answer.push_back(-1);
        }
    }
    
    return answer;
}