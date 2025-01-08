public class Solution
{
    public string solution(string s, int n)
    {
        string answer = string.Empty;
        
        for(int i = 0; i < s.Length; i++)
        {
            int changeValue = n;
            char changeChar = s[i];
            
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += (char)(changeChar + changeValue > 'Z' ? ('A' + (changeChar + changeValue - 'Z' - 1)) : changeChar + changeValue);
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                answer += (char)(changeChar + changeValue > 'z' ? ('a' + (changeChar + changeValue - 'z' - 1)) : changeChar + changeValue);
            }
            else
            {
                answer += s[i];
            }
        }
        
        
        return answer;
    }
}