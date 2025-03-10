using System;

public class Solution 
{
    public string solution(int a, int b)
    {
        string[] dayOfWeeks = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
        int[] days = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int count = b;
        for(int i = 0; i < a - 1; i++)
        {
            count += days[i];
        }
        
        int weekCount = (5 + count % dayOfWeeks.Length);
        int index = weekCount > dayOfWeeks.Length ? weekCount % dayOfWeeks.Length : weekCount;
        
        return dayOfWeeks[index - 1];
    }
}