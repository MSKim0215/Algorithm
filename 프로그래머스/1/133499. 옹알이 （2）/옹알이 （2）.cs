using System;

public class Solution 
{ 
    public int solution(string[] babbling)
    {
        int answer = 0;
        string[] possible = { "aya", "ye", "woo", "ma" };
        
        for(int i = 0; i < babbling.Length; i++)
        {
            var target = babbling[i];         
            
            for(int j = 0; j < possible.Length; j++)
            {
                var impossible = possible[j] + possible[j];       
                target = target.Replace(impossible, "x");
                target = target.Replace(possible[j], " ");
            }
            
            if(target.Trim() == string.Empty)
            {
                answer++;
            }
        }
        
        return answer;
    }
}