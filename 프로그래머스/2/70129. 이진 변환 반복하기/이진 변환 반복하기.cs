using System;
using System.Linq;
using System.Collections.Generic;

public class Solution 
{
    private string RemoveNumberZero(string targetStr, ref int zeroCount)
    {
        string result = string.Empty;
        
        for(int i = 0; i < targetStr.Length; i++)
        {
            var targetChar = targetStr[i];
            if(targetChar == '0') zeroCount++;
            else
            {
                result += targetChar;
            }
        }
        return result;
    }
    
    private string ChangeBinary(int targetNumber)
    {
        string result = string.Empty;
        
        while(targetNumber > 0)
        {
            result += (targetNumber % 2);
            targetNumber /= 2;
        }
        return new string(result.Reverse().ToArray());
    }
    
    public int[] solution(string s) 
    {
        int zeroCount = 0;
        int changeCount = 0;
        
        while(s.Length > 1)
        {
            string changeStr = RemoveNumberZero(s, ref zeroCount);
            s = ChangeBinary(changeStr.Length);
            changeCount++;
        }
        
        return new int[] { changeCount, zeroCount };
    }
}