using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(int k, int[] tangerine)
    {
        var sizeDict = new Dictionary<int, int>();
        for(int i = 0; i < tangerine.Length; i++)
        {
            var targetSize = tangerine[i];
            if(sizeDict.ContainsKey(targetSize))
            {
                sizeDict[targetSize]++;
            }
            else
            {
                sizeDict.Add(targetSize, 1);
            }
        }
    
        var sortResult = sizeDict.OrderByDescending(x => x.Value);    
        int answer = 0;
        int count = 0;
        
        // 개수가 많은 귤부터 담아서 종류 갯수를 체크
        foreach(var result in sortResult)
        {
            count += result.Value;
            answer++;
            
            if(count >= k) break;
        }

        return answer;
    }
}