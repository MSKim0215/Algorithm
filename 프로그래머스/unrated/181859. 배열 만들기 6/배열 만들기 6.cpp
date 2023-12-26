#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int index = 0;
    
    // index가 arr의 길이보다 작으면 반복한다.
    while(index < arr.size())
    {
        if(stk.size() == 0)
        {   // 만약, stk가 빈 배열이라면
            stk.push_back(arr[index]);  // arr[index]를 stk에 추가한다.
        }
        else
        {   // stk에 원소가 있다면
            if(stk[stk.size() - 1] == arr[index])
            {   // stk의 마지막 원소가 arr[index]와 같다면
                stk.erase(stk.begin() + stk.size() - 1);    // stk의 마지막 원소를 제거한다.
            }
            else
            {   // stk의 마지막 원소와 arr[index]와 같지 않다면
                stk.push_back(arr[index]);      // arr[index]를 stk에 추가한다.
            }
        }
        
        index++;        // index를 1 증가시킨다.
    }
    
    if(stk.size() == 0) stk.push_back(-1);
    
    return stk;
}