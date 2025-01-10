using System;

public class Solution 
{
    public int solution(int n)
    {
        int[] numbers = new int[1000001];
        for(int i = 2; i <= n; i++)
        {
            numbers[i] = i;
        }
        
        for(int i = 2; i < numbers.Length; i++)
        {
            if(numbers[i] == 0) continue;
            
            for(int j = i * 2; j < numbers.Length; j += i)
            {
                numbers[j] = 0;
            }
        }
        
        int answer = 0;

        for(int i = 2; i < numbers.Length; i++)
        {
            if(numbers[i] != 0) answer++;
        }
        
        return answer;
    }
}