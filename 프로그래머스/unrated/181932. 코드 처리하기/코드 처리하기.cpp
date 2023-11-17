#include <string>
#include <vector>

using namespace std;

string solution(string code) 
{
    string answer = "";
    int currMode = 0;       // 모드 0, 1
    
    for(int i = 0; i < code.length(); i++)
    {
        if(currMode == 0)
        {
            if(code[i] != '1')
            {   // 1이 아닐 경우
                if(i % 2 == 0)
                {   // 짝수일 때만
                    answer += code[i];
                }
            }
            else
            {   // 1일 경우
                currMode = 1;       // 모드 변경
            }
        }
        else
        {
            if(code[i] != '1')
            {
                if(i % 2 != 0)
                {
                    answer += code[i];
                }
            }
            else
            {
                currMode = 0;
            }
        }
    }
    
    if(answer == "") answer = "EMPTY";
    
    return answer;
}