using System;

public class Solution 
{
    public int solution(int[,] dots) 
    {
        int dotCount = dots.GetLength(0);
        
        for(int i = 0; i < dotCount; i++)
        {
            for(int j = i + 1; j < dotCount; j++)
            {
                double slope1 = (double)(dots[j, 1] - dots[i, 1]) / (dots[j, 0] - dots[i, 0]);
                
                for(int k = 0; k < dotCount; k++)
                {
                    if(k == i || k == j) continue;
                    for(int l = k + 1; l < dotCount; l++)
                    {
                        if(l == i || l == j) continue;
                        double slope2 = (double)(dots[l, 1] - dots[k, 1]) / (dots[l, 0] - dots[k, 0]);
                        
                        if(slope1 == slope2) return 1;
                    }
                }
            }
        }
        return 0;
    }
}