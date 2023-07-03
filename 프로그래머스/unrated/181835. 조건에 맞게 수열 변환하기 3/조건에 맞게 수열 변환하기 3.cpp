#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    if(k % 2 == 0)
    {   // k 더하기
        for(int i = 0; i < arr.size(); i++)
        {
            answer.push_back(arr[i] + k);
        }
    }
    else
    {   // k 곱하기
        for(int i = 0; i < arr.size(); i++)
        {
            answer.push_back(arr[i] * k);
        }
    }
    
    return answer;
}