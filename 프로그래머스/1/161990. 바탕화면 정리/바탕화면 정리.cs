using System;

public class Solution
{
    public int[] solution(string[] wallpaper)
    {
        int[] answer = new int[] { -1, -1, -1, -1 };    // lux, luy, rdx, rdy
        
        int luyMin = 100;
        int rdyMax = -1;
        
        for(int i = 0; i < wallpaper.Length; i++)
        {
            var line = wallpaper[i];
            
            if(line.Contains("#"))
            {   
                if(answer[0] == -1)
                {   // lux
                    answer[0] = i;
                }
                
                answer[2] = i + 1;      // rdx
            }
            
            for(int j = 0; j < line.Length; j++)
            {
                var word = line[j];
                
                if(word == '#')
                {
                    if(j < luyMin)
                    {   // luy
                        answer[1] = j;
                        luyMin = j;
                    }
                    
                    if(j > rdyMax)
                    {   // rdy
                        answer[3] = j + 1;
                        rdyMax = j;
                    }
                }
            }
        }
        
        return answer;
    }
}