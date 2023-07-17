#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r; i++)
    {
        string temp = to_string(i);
        bool isCheck = true;
        for(int j = 0; j < temp.length(); j++)
        {
            if(temp[j] != '5' && temp[j] != '0')
            {
                isCheck = false;
                break;
            }
        }
        
        if(isCheck)
        {
            answer.push_back(i);
        }
    }
    
    if(answer.empty()) answer.push_back(-1);
    
    return answer;
}