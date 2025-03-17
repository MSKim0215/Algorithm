using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int x, int y, int n)
    {
        if(x == y) return 0;
        
        bool[] found = new bool[1000001];
        
        Queue<(int value, int count)> operationQueue = new Queue<(int, int)>();
        operationQueue.Enqueue((x, 0));
        found[x] = true;
        
        while(operationQueue.Count > 0)
        {
            var current = operationQueue.Dequeue();    
            int[] operations = { current.value + n, current.value * 2, current.value * 3 };
            
            foreach(var nextValue in operations)
            {
                if(nextValue == y)
                {
                    return current.count + 1;
                }
                
                if(nextValue <= y && !found[nextValue])
                {
                    found[nextValue] = true;
                    operationQueue.Enqueue((nextValue, current.count + 1));
                }
            }
        }
        
        return -1;
    }
}