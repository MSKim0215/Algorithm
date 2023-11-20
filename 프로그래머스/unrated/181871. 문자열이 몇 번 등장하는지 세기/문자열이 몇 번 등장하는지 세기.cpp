#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    int answer = 0;
    
    for(int i = 0; i < myString.length(); i++)
    {
        int index = i;
        bool isCheck = true;
        
        for(int j = 0; j < pat.length(); j++)
        {
            if(myString[index] != pat[j])
            {
                isCheck = false;
            }
            index++;
        }
        
        if(isCheck)
        {
            answer++;
        }
    }
    
    return answer;
}