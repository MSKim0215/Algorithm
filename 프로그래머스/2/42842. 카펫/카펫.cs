using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int brown, int yellow)
    {
        var extent = brown + yellow;
        var values = new List<List<int>>();
        
        for(int i = 1; i <= extent; i++)
        {
            if(extent % i != 0) continue;
            
            var width = i;
            var height = extent / i;
            if(height < 3) continue;
            if(width < height) continue;
            
            var tempValue = new List<int>();
            tempValue.Add(width);
            tempValue.Add(height);
            
            values.Add(tempValue);
        }
        
        if(values.Count == 1)
        {
            return values[0].ToArray();
        }
        
        int targetIndex = 0;
        for(int i = 0; i < values.Count; i++)
        {   // 갈색 개수: 가로 x 2 + (세로 - 2) x 2
            var width = values[i][0];
            var height = values[i][1];
            var checkNumber = width * 2 + (height - 2) * 2;         
            if(checkNumber == brown)
            {
                targetIndex = i;
                break;
            }
        }
        
        return values[targetIndex].ToArray();
    }
}