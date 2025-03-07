using System;

class Solution
{
    public int solution(int n)
    {   // n: 이동해야할 거리
        var answer = 0;
        
        while(n > 0)
        {
            if(n % 2 == 0)
            {   
                n /= 2;
            }
            else
            {
                n--;
                answer++;
            }
        }
        
        return answer;
    }
}