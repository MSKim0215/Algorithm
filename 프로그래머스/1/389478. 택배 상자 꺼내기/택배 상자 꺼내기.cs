using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(int n, int w, int num)
    {   // w: 가로 길이, n: 총 상자 개수, num: 원하는 숫자
        var boxDict = new Dictionary<int, List<int>>(); // 숫자라인, 숫자배열
        
        int line = 1;
        bool isReverse = false;
        
        for(int i = 1; i <= n; i++)
        {
            if(!boxDict.ContainsKey(line))
            {   // 최초 라인 생성
                boxDict.Add(line, new List<int>(){i});
            }
            else
            {   // 기존 라인 추가
                boxDict[line].Add(i);
            }
            
            if(!isReverse)
            {
                line++;
                
                if(line > w)
                {
                    line = w;
                    isReverse = true;
                }
            }
            else
            {
                line--;
                
                if(line < 1)
                {
                    line = 1;
                    isReverse = false;
                }
            }
        }
        
        int answer = 0;
        
        foreach(var box in boxDict)
        {
            if(!box.Value.Contains(num)) continue;
            
            for(int i = box.Value.Count - 1; i >= 0; i--)
            {
                answer++;
                
                if(box.Value[i] == num) break;
            }
        }
        
        return answer;
    }
}