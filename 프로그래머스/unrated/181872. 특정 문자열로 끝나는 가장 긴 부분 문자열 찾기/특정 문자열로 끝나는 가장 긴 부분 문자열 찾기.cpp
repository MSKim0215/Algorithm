#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) 
{
    string answer = "";
    
    int targetIndex = 0;        // 목표 위치 인덱스
    
    // pat: 타겟 문자열
    for(int i = 0; i < myString.length(); i++)
    {
        bool isCheck = true;
        
        for(int j = 0; j < pat.length(); j++)
        {
            if(isCheck)
            {
                if(myString[i] == pat[j])
                {
                    isCheck = true;
                }
                else
                {   // pat의 문자가 연속으로 오지 않을 경우
                    isCheck = false;
                }
            }
            else
            {
                if(myString[i] == pat[j])
                {   // pat의 문자가 처음 등장 했을 경우
                    isCheck = true;
                }
                else
                {
                    isCheck = false;
                }
            }
        }
        
        if(isCheck)
        {   
            targetIndex = i;
        }
    }
    
    for(int i = 0; i <= targetIndex; i++)
    {
        answer += myString[i];    
    }
    
    return answer;
}