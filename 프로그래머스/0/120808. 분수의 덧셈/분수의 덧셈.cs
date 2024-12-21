using System;

public class Solution 
{
    private int GetGCD(int numA, int numB)
    {
        var result = numA % numB;
        if(result == 0)
        {
            return numB;
        }
        else
        {
            return GetGCD(numB, result);
        }
    }
    
    public int[] solution(int numer1, int denom1, int numer2, int denom2) 
    {
        int[] answer = new int[] { 0, 0 };

        int denom = denom1 * denom2 / GetGCD(denom1, denom2);
        int numer = (denom / denom1 * numer1) + (denom / denom2 * numer2);

        answer[0] = numer / GetGCD(numer, denom);
        answer[1] = denom / GetGCD(numer, denom);

        return answer;
    }
}