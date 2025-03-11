using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] topping)
    {
        int answer = 0;
     
        var myDict = new Dictionary<int, int>();
        var youDict = new Dictionary<int, int>();
        
        for(int i = 0; i < topping.Length; i++)
        {
            if(myDict.ContainsKey(topping[i]))
            {
                myDict[topping[i]]++;
            }
            else
            {
                myDict.Add(topping[i], 1);
            }
        }
        
        for(int i = 0; i < topping.Length; i++)
        {
            myDict[topping[i]]--;
            
            if(!youDict.ContainsKey(topping[i]))
            {
                youDict.Add(topping[i], 1);
            }
            
            if(myDict[topping[i]] <= 0)
            {
                myDict.Remove(topping[i]);
            }
            
            if(myDict.Count == youDict.Count)
            {
                answer++;
            }
        }
        
        return answer;
    }
}