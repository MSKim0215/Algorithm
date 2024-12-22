using System;
using System.Linq;

public class Solution 
{
    private string ReverseString(string targetStr)
    {
      char[] reverseResult = targetStr.ToArray();
      Array.Reverse(reverseResult);
      return new string(reverseResult);
    }
    
    public string solution(string a, string b) 
    {
        string reverseA = ReverseString(a);
        string reverseB = ReverseString(b);
        
        int plusNum = 0;
        string answer = string.Empty;
        for(int i = 0; i < ((reverseA.Length >= reverseB.Length) ? reverseB.Length : reverseA.Length); i++)
        {
            int result = int.Parse(reverseA[i].ToString()) + int.Parse(reverseB[i].ToString()) + plusNum;
            
            plusNum = (result >= 10) ? result / 10 : 0;
            result = (result >= 10) ? result % 10 : result;
            
            answer += result.ToString();
        }
        
        if(reverseA.Length != reverseB.Length)
        {
            bool isLongA = reverseA.Length > reverseB.Length;
            int lastLength = isLongA ? (reverseA.Length - reverseB.Length) : (reverseB.Length - reverseA.Length);
            int startIndex = isLongA ? (reverseA.Length - lastLength) : (reverseB.Length - lastLength);
            int endIndex = isLongA ? reverseA.Length : reverseB.Length;
            
            for(int i = startIndex; i < endIndex; i++)
            {
                int result = int.Parse((isLongA) ? reverseA[i].ToString() : reverseB[i].ToString()) + plusNum;
                
                plusNum = (result >= 10) ? result / 10 : 0;
                result = (result >= 10) ? result % 10 : result;
                
               answer += result.ToString();
            }
        }
        
        if(plusNum != 0)
        {
            answer += plusNum.ToString();
        }
        
        return ReverseString(answer);
    }
}