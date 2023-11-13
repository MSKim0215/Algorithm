#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) 
{
    int answer = -1;
    
    for(int i = idx; i < arr.size(); i++)
    {   // idx부터 값을 체크한다.
        if(arr[i] == 1)
        {
            answer = i;
            break;
        }
    }
    
    return answer;
}