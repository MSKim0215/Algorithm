using System;

public class Solution 
{
    public int solution(int[,] lines)
    {
        int answer = 0;
        int[] lineCount = new int[200];
        
        for(int i = 0; i < lines.GetLength(0); i++)
        {
            int max = Math.Max(lines[i, 0], lines[i, 1]);
            int min = Math.Min(lines[i, 0], lines[i, 1]);
            
            for(int j = min; j < max; j++)
            {
                lineCount[j + 100]++;
            }
        }
        
        for(int i = 0; i < lineCount.Length; i++)
        {
            if(lineCount[i] > 1) answer++;
        }
        
        return answer;
    }
}