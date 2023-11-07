#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) 
{
    int str1_Count = str1.length();
    int str2_Count = str2.length();
    
    string answer = "";
    
    // str1과 str2의 길이는 같다.
    for(int i = 0; i < str1_Count; i++)
    {
        answer += str1[i];
        answer += str2[i];
    }
    
    return answer;
}