#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<int> charStack;
    charStack.push(s[0]);
    
    for(int i = 1; i < s.size(); i++)
    {
        if(charStack.empty())
        {
            charStack.push(s[i]);
            continue;
        }
        
        if(charStack.top() == s[i])
        {
            charStack.pop();
        }
        else
        {
            charStack.push(s[i]);
        }
    }
    
    if(charStack.empty()) return 1;
    return 0;
}