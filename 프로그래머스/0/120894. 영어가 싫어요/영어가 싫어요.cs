using System;

public class Solution 
{
    public enum NumStr
    {
        zero, one, two, three, four, five, six, seven, eight, nine
    }
    
    public long solution(string numbers) 
    {
        var tempNumStr = numbers;
        var enumArr = Enum.GetValues(typeof(NumStr));
        
        for(int i = 0; i < enumArr.Length; i++)
        {
            var targetValue = enumArr.GetValue(i);
            var targetStr = targetValue.ToString();
            var targetInt = ((int)targetValue).ToString();
            
            while(tempNumStr.Contains(targetStr))
            {
                tempNumStr = tempNumStr.Replace(targetStr, targetInt);
            } 
        }
        
        return (long.Parse(tempNumStr));
    }
}