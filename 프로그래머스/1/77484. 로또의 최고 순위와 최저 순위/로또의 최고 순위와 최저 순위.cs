using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{
    public int[] solution(int[] lottos, int[] win_nums)
    {
        int zeroCount = lottos.Where(num => num == 0).Count();
        var sameCount = lottos.Intersect(win_nums).Count();
        
        Dictionary<int, int> rankDict = new Dictionary<int, int>
        {   // key: sameCount, value: rank
            { 6, 1 }, { 5, 2 }, { 4, 3 }, { 3, 4 }, { 2, 5 }, { 1, 6 }, { 0, 6 }  
        };
        
        return new int[2] { rankDict[sameCount + zeroCount], rankDict[sameCount] };
    }
}