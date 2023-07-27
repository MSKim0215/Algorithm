#include <string>
#include <vector>

using namespace std;

string solution(string n_str) 
{
    string answer = "";
    
    bool isCheck = true;
    for(int i = 0; i < n_str.length(); i++)
    {
        if(isCheck)
        {
            if(n_str[i] == '0')
            {
                if(n_str[i + 1] != '0')
                {
                    isCheck = false;
                }
            }
            else
            {
                isCheck = false;
                answer += n_str[i];
            }
        }
        else
        {
            answer += n_str[i];
        }
    }
    
    return answer;
}