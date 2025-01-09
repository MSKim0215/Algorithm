using System;

public class Solution
{
    public int solution(int a, int b, int n)
    {
        int answer = 0;
        
        while(n >= a)
        {
            int getCoke = (n / a) * b;
            answer += getCoke;
            n = (n % a) + getCoke;
        }
        
        return answer;
    }
}