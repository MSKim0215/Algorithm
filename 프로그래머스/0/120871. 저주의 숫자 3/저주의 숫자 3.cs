using System;

public class Solution
{
    public int solution(int n)
    {
        int answer = 0;
        int index = 1;
        int count = n;

        while(count > 0)
        {
            answer = index;
            index++;
            
            if(answer % 3 == 0 || answer.ToString().Contains("3")) { }
            else 
            {
                count--;
            }
        }
        
        return answer;
    }
}