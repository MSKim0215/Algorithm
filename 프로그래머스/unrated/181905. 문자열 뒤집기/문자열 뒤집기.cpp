#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e)
{
    string temp = "";
    
    for(int i = e; i >= s; i--)
    {
        temp += my_string[i];
    }
    
    string answer = "";
    
    for(int i = 0; i < s; i++)
    {
        answer += my_string[i];
    }
    
    answer += temp;
    
    for(int i = e + 1; i < my_string.length(); i++)
    {
        answer += my_string[i];
    }
    
    return answer;
}