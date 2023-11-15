#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    vector<int> tempNum;    // 분리된 값
    
    string tempStr = "";    
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            if(tempStr != "")
            {
                tempNum.push_back(stoi(tempStr));
                tempStr = "";
            }
        }
        else if(s[i] == '-' || (s[i] >= '0' && s[i] <= '9'))
        {
            tempStr += s[i];
        }
        else if(s[i] == 'Z')
        {
            tempStr += to_string((tempNum[tempNum.size() - 1] * -1));
        }
    }
    
    if(tempStr != "") tempNum.push_back(stoi(tempStr));
    
    for(int i = 0; i < tempNum.size(); i++)
    {
        answer += tempNum[i];
    }
    
    return answer;
}