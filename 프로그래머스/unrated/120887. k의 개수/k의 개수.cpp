#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k)
{
    // 시작 숫자: i
    // 도착 숫자: j
    // 타겟 숫자: k
    
    int answer = 0;
    
    for(int a = i; a <= j; a++)
    {
        string tempNum = to_string(a);
        for(int b = 0; b < tempNum.length(); b++)
        {
            if(tempNum[b] == to_string(k)[0])
            {
                answer++;
            }
        }
    }
    
    return answer;
}