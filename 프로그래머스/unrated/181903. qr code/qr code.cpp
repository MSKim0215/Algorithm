#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) 
{
    string answer = "";
    
    // code의 각 인덱스를 q로 나눈다.
    // 여기서 나온 나머지 값이 r인 위치의 문자를 앞에서부터 순서대로 이어붙여라.
    
    for(int i = 0; i < code.length(); i++)
    {
        if(i % q == r)
        {
            answer += code[i];
        }
    }
    
    return answer;
}