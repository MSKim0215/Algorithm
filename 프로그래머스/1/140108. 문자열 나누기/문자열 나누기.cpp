#include <string>
#include <vector>
#include <iostream>

using namespace std;

string replace_word(string base, string remove)
{
    string result = base;
    result.replace(result.find(remove), remove.length(), "");
    return result;
}

int solution(string s)
{
    int answer = 0;
    
    while(true)
    {
        if(s == "") break;
        
        char x = s[0];
        string target = "";
        target += x;
        
        int x_count = 1, other_count = 0;
        
        for(int i = 1; i < s.length(); i++)
        {
            if(x_count == other_count)
            {
                s = replace_word(s, target);
                target = "";
                answer++;
                break;
            }

            if(x == s[i])
            {
                x_count++;
            }
            else
            {
                other_count++;
            }

            target += s[i];
        }
        
        if((x_count != other_count) || (x_count == other_count && target != ""))
        {
            s = replace_word(s, target);
            answer++;
            break;
        }
    }
    
    return answer;
}