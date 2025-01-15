using System;
using System.Collections.Generic;

public class Solution 
{
    public int[] solution(int[] lottos, int[] win_nums)
    {
        int zeroCount = 0;
        int sameCount = 0;
        for(int i = 0; i < lottos.Length; i++)
        {
            if(lottos[i] == 0)
            {
                zeroCount++;
                continue;
            }

            for(int j = 0; j < win_nums.Length; j++)
            {
                if(lottos[i] == win_nums[j])
                {
                    sameCount++;
                }
            }
        }
        
        Dictionary<int, int> rankDict = new Dictionary<int, int>
        {   // key: sameCount, value: rank
            { 6, 1 }, { 5, 2 }, { 4, 3 }, { 3, 4 }, { 2, 5 }, { 1, 6 }, { 0, 6 }  
        };
        
        int[] answer = new int[] { rankDict[sameCount + zeroCount], rankDict[sameCount] };
        return answer;
    }
}