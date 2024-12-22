using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{
    public int[] solution(int[] numlist, int n) 
    {
        Dictionary<int, int> result = new Dictionary<int, int>();    
        // key: numList, value: 거리값
        
        for(int i = 0; i < numlist.Length; i++)
        {
            int length = (n >= numlist[i]) ? n - numlist[i] : numlist[i] - n;     
            result.Add(numlist[i], length);
        }
        
        var orderResult = result.OrderBy(item => item.Value).
            ThenByDescending(item => item.Key).
            ToDictionary(x => x.Key, x => x.Value);       
        
        return orderResult.Keys.ToArray();
    }
}