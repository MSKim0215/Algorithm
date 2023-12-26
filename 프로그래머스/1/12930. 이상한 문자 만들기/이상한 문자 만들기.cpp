#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    int targetIndex = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
        {
            if(targetIndex % 2 == 0)
            {   // 짝수: 대문자
                if(s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] -= 32;
                }
            }
            else
            {   // 홀수: 소문자
                if(s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 32;
                }
            }
            
            targetIndex++;
        }
        else
        {
            targetIndex = 0;
        }
    }
    
    return s;
}