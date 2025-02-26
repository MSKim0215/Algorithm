using System;
using System.Collections.Generic;

public class Solution 
{
    public bool solution(string s) 
    {
        var wordStack = new Stack<char>();
        
        for(int i = 0; i < s.Length; i++)
        {
            var targetChar = s[i];
            
            if(targetChar == '(')
            {
                wordStack.Push('0');
            }
            else
            {
                if(wordStack.Count == 0)
                {
                    return false;
                }
                wordStack.Pop();
            }
        }
        
        return wordStack.Count == 0;
    }
}