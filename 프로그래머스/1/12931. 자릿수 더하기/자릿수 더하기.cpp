#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    string tempStr = to_string(n);
    for(int i = 0; i < tempStr.length(); i++)
    {
        string temp = "";
        temp += tempStr[i];
        answer += stoi(temp);
    }
    
    return answer;
}