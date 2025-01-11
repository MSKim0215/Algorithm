using System;

public class Solution
{
    public int solution(int n, int m, int[] section)
    {
        int index = 0;
        int answer = 0;
        
        while(index < section.Length)
        {
            answer++;
            int end = section[index] + m - 1;
            
            while(index < section.Length && end >= section[index])
            {
                index++;
            }
        }
        
        return answer;
    }
}