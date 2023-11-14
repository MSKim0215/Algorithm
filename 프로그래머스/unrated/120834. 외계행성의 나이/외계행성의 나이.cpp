#include <string>
#include <vector>

using namespace std;

string solution(int age) 
{
    string ageStr = to_string(age);     // 나이를 문자열로 변환
    char alphabets[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };    // 알파벳
    
    string answer = "";
    
    for(int i = 0; i < ageStr.length(); i++)
    {
        int targetNum = ageStr[i] - '0';
        answer += alphabets[targetNum];
    }
    
    return answer;
}