#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    
    string tempStr = "";
    
    for(int i = 0; i < myStr.length(); i++)
    {
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c')
        {
            tempStr += myStr[i];
        }
        else
        {
            if(tempStr != "")
            {
                answer.push_back(tempStr);
                tempStr = "";
            }
        }
    }
    
    if(tempStr != "")
    {
        answer.push_back(tempStr);
    }
    
    if(answer.size() <= 0)
    {
        answer.push_back("EMPTY");
    }
    
    return answer;
}