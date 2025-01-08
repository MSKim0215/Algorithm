public class Solution
{
    public string solution(string s, int n)
    {
        string answer = string.Empty;
        
        for(int i = 0; i < s.Length; i++)
        {
            int changeValue = n;
            char changeChar = s[i];
            
            var changeTarget = changeValue + changeChar;

            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += (char)(changeTarget > 'Z' ? ('A' + (changeTarget - 'Z' - 1)) : changeTarget);
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                answer += (char)(changeTarget > 'z' ? ('a' + (changeTarget - 'z' - 1)) : changeTarget);
            }
            else
            {
                answer += s[i];
            }
        }
        
        
        return answer;
    }
}