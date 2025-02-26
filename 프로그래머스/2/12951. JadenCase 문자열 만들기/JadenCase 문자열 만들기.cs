using System;

public class Solution
{
    private bool IsSmallLetter(char target)
    {
        if(target >= 'a' && target <= 'z') return true;
        return false;
    }
    
    private bool IsBigLetter(char target)
    {
        if(target >= 'A' && target <= 'Z') return true;
        return false;
    }
    
    public string solution(string s)
    {
        string answer = string.Empty;
        char prevChar = ' ';
        
        for(int i = 0; i < s.Length; i++)
        {
            var targetChar = s[i];
            
            if(targetChar == ' ')
            {   // 현재 문자가 공백일 경우 다음 문자 체크
                prevChar = targetChar;
                answer += prevChar;
            }
            else
            {   // 현재 문자가 공백이 아닐 경우
                if(prevChar == ' ')
                {   // 이전 문자가 공백일 경우 현재 문자는 첫번째 문자
                    prevChar = targetChar;
                    answer += (IsSmallLetter(targetChar) ? char.ToUpper(targetChar) : targetChar);
                }
                else
                {   // 이전 문자가 공백이 아닌 경우
                    prevChar = targetChar;
                    answer += (IsBigLetter(targetChar) ? char.ToLower(targetChar) : targetChar);
                }
            }
        }
        
        return answer;
    }
}