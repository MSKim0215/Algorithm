#include <string>
#include <vector>

using namespace std;

int solution(int num, int k)
{
    string tempNum = to_string(num);        // 문자열 변환
    string target = to_string(k);           // 목표 숫자 문자열 변환
    
    int answer = -1;
    
    for(int i = 0; i < tempNum.length(); i++)
    {
        if(tempNum[i] == target[0])
        {
            answer = i + 1;
            break;
        }
    }
    
    return answer;
}