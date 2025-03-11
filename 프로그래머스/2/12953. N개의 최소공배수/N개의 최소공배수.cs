using System;

public class Solution
{
    private int GetGCD(int valueA, int valueB)
    {
        if(valueB == 0) return valueA;
        return GetGCD(valueB, valueA % valueB);
    }
    
    private int GetLCM(int valueA, int valueB)
    {
        return valueA * valueB / GetGCD(valueA, valueB);
    }
    
    public int solution(int[] arr)
    {
        Array.Sort(arr);
        
        var targetNumber = GetLCM(arr[arr.Length - 2], arr[arr.Length - 1]);
        var increaseNum = targetNumber;
        while(true)
        {
            bool isCheck = true;
            for(int i = 0; i < arr.Length; i++)
            {
                if(targetNumber % arr[i] != 0)
                {
                    isCheck = false;
                    break;
                }
            }
            
            if(isCheck) break;
            
            targetNumber += increaseNum;
        }
        
        return targetNumber;
    }
}