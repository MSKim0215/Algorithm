using System;
using System.Linq;

public class Solution 
{
    public int solution(int n, int[] lost, int[] reserve) 
    {
        Array.Sort(lost);
        Array.Sort(reserve);
        
        int answer = n - lost.Length;
        var lostSet = lost.ToHashSet();
        var reserveSet = reserve.ToHashSet();
        
        for(int i = 0; i < lost.Length; i++)
        {
            var lostNumber = lost[i];
            
            if(reserveSet.Contains(lostNumber))
            {
                reserveSet.Remove(lostNumber);
                lostSet.Remove(lostNumber);
                answer++;
            }
        }
        
        foreach(var reserveStudent in reserveSet)
        {
            if(lostSet.Contains(reserveStudent - 1))
            {
                lostSet.Remove(reserveStudent - 1);
                answer++;
            }
            else if(lostSet.Contains(reserveStudent + 1))
            {
                lostSet.Remove(reserveStudent + 1);
                answer++;
            }
        }
        
        return answer;
    }
}