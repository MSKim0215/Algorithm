#include <string>
#include <vector>

using namespace std;

string solution(string letter) 
{
    vector<string> morse = 
    {
        ".-", "-...", "-.-.", "-..", ".", "..-.",
        "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-",
        "-.--", "--.."
    };
    
    vector<string> alphabet = 
    {
        "a", "b", "c", "d", "e", "f",
        "g", "h", "i", "j", "k", "l",
        "m", "n", "o", "p", "q", "r",
        "s", "t", "u", "v", "w", "x",
        "y", "z"
    };
    
    vector<string> codes;       // 넘어온 코드
    string tempCode = "";
    
    for(int i = 0; i < letter.length(); i++)
    {
        if(letter[i] == ' ')
        {   // 공백이라면 codes에 넣어주기
            codes.push_back(tempCode);
            tempCode = "";
        }
        else
        {
            tempCode += letter[i];
        }
    }
    
    if(tempCode != "") codes.push_back(tempCode);
    
    string answer = "";
    
    for(int i = 0; i < codes.size(); i++)
    {
        for(int j = 0; j < morse.size(); j++)
        {
            if(codes[i] == morse[j])
            {
                answer += alphabet[j];
                break;
            }
        }
    }
    
    return answer;
}