#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    if(s.length() == 4 || s.length() == 6)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                return false;
            }
        }
        return true;
    }
    return false;
}