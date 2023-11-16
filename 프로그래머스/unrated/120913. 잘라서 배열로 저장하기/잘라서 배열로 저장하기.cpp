#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;
    
    int index = 0;
    string tempStr = "";
    for(int i = 0; i < my_str.length(); i++)
    {
        if(index < n)
        {
            tempStr += my_str[i];
            index++;
        }
        else
        {
            answer.push_back(tempStr);
            index = 0;
            tempStr = "";
            
            tempStr += my_str[i];
            index++;
        }
    }
    
    if(tempStr != "")
    {
        answer.push_back(tempStr);
    }
    
    return answer;
}