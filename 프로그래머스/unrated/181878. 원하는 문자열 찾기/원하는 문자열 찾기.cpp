#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string changeString = "";
    
    // 모두 대문자로 변환
    for(int i = 0; i < myString.length(); i++)
    {
        if(myString[i] >= 'a' && myString[i] <= 'z')
        {
            changeString += (myString[i] - 32);
        }
        else
        {
            changeString += myString[i];
        }
    }
    
    for(int i = 0; i < pat.length(); i++)
    {
        if(pat[i] >= 'a' && pat[i] <= 'z')
        {
            pat[i] = (pat[i] - 32);
        }
    }
    
    // 대문자 상태에서 비교
    if(changeString.find(pat) == string::npos) return 0;
    return 1;
}