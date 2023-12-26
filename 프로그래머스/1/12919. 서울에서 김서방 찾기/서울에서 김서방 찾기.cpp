#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul)
{
    for(int i = 0; i < seoul.size(); i++)
    {
        if(seoul[i].length() == 3)
        {
            if(seoul[i][0] == 'K' && seoul[i][1] == 'i' && seoul[i][2] == 'm')
            {
                string answer = "김서방은 ";
                answer += to_string(i);
                answer += "에 있다";
                return answer;
            }
        }
    }
}