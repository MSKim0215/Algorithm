#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) 
{
    vector<string> numStrs;
    
    bool isCheck = false;
    string temp = "";
    
    for(int i = 0; i < my_string.length(); i++)
    {
        if(my_string[i] >= '0' && my_string[i] <= '9')
        {
            isCheck = true;
            temp += my_string[i];
        }
        else
        {
            if(isCheck)
            {
                numStrs.push_back(temp);
                temp = "";
                isCheck = false;
            }
        }
    }
    
    if(temp != "")
    {
        numStrs.push_back(temp);
    }
    
    int answer = 0;
    
    for(int i = 0; i < numStrs.size(); i++)
    {
        cout << i << " : " << stoi(numStrs[i]) << endl;
        
        answer += stoi(numStrs[i]);
    }
    return answer;
}