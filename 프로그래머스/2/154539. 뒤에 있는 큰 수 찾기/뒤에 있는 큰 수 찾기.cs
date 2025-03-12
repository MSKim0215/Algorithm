using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] numbers)
    {
        var answer = new int[numbers.Length];
        var numberStack = new Stack<int>();
        
        for(int i = 0; i < numbers.Length; i++)
        {
            while(numberStack.Count > 0 && numbers[numberStack.Peek()] < numbers[i])
            {
                answer[numberStack.Pop()] = numbers[i];
            }
            
            numberStack.Push(i);
        }
        
        for(int i = 0; i < answer.Length; i++)
        {
            if(answer[i] == 0) answer[i] = -1;
        }
        
        return answer;
    }
}