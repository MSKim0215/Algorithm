using System;

public class Solution 
{
    public int solution(int[] number)
    {
        int answer = 0;
        int numSize = number.GetLength(0);
        
        for(int i = 0; i < numSize; i++)
        {
            for(int j = i + 1; j < numSize; j++)
            {
                for(int k = j + 1; k < numSize; k++)
                {
                    if(number[i] + number[j] + number[k] == 0)
                    {
                        answer++;
                    }
                }
            }
        }
        
        return answer;
    }
}