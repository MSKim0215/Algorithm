#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int index = 0;

    while(true)
    {
        if(index >= arr.size()) break;
        
        if(stk.size() <= 0)
        {   // stk가 빈 배열이라면 
            stk.push_back(arr[index]);  // arr[i]를 stk에 추가한다.
            index++;        // i가 1 증가한다.
        }
        else
        {   // stk가 빈 배열이 아니라면
            if(stk[stk.size() - 1] < arr[index])
            {   // stk의 마지막 원소가 arr[i]보다 작으면
                stk.push_back(arr[index]);    // arr[i]를 stk의 뒤에 추가하고
                index++;    // i가 1 증가한다.
            }
            else
            {   // stk의 마지막 원소가 arr[i]보다 크거나 같으면
                stk.erase(stk.begin() + (stk.size() - 1));
            }
        }
    }
    return stk;
}