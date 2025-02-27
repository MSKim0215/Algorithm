using System;
using System.Linq;

class Solution 
{
    private int CountNumberOne(int targetNumber)
    {
        int count = 0;
        
        while(targetNumber > 0)
        {
            if(targetNumber % 2 == 1) count++;
            targetNumber /= 2;
        }
        return count;
    }
    
    public int solution(int n) 
    {
        var nextNumber = n + 1;
        int count = CountNumberOne(n);
        
        n = nextNumber;
        
        while(true)
        {
            int targetCount = CountNumberOne(n);

            if(targetCount == count) break;
            
            nextNumber++;
            n = nextNumber;
        }
        
        return nextNumber;
     }
}