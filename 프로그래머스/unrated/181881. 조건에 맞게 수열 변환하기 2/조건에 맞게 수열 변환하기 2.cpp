#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) 
{
    int answer = 0;
    
    while(true)
    {
        int prevAnswer = answer;
        bool isCheck = false;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] /= 2;
                isCheck = true;
            }
            else if(arr[i] < 50 && arr[i] % 2 != 0)
            {
                arr[i] = arr[i] * 2 + 1;
                isCheck = true;
            }
        }
        
        if(isCheck)
        {
            answer++;
        }
        
        if(prevAnswer == answer)
        {
            break;
        }
    }
    
    return answer;
}