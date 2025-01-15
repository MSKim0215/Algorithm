using System;
using System.Collections.Generic;

public class Solution 
{
    public int[] solution(string[] keymap, string[] targets)
    {
        int[] answer = new int[targets.Length];
        Dictionary<char, int> keyPressCountDict = new Dictionary<char, int>();
        
        // 1. 문자마다 가장 작은 누른 횟수 넣어줌
        for(int i = 0; i < keymap.Length; i++)
        {
            for(int j = 0; j < keymap[i].Length; j++)
            {
                var targetChar = keymap[i][j];
                int pressCount = j + 1;
                
                if(!keyPressCountDict.ContainsKey(targetChar) || keyPressCountDict[targetChar] > pressCount)
                {
                    keyPressCountDict[targetChar] = pressCount;
                }
            }
        }
        
        // 2. 각 타겟 문자마다 누른 횟수 계산
        for(int i = 0; i < targets.Length; i++)
        {
            int count = 0;
            bool isNone = false;
            
            for(int j = 0; j < targets[i].Length; j++)
            {
                var targetChar = targets[i][j];
                
                if(keyPressCountDict.ContainsKey(targetChar))
                {
                    count += keyPressCountDict[targetChar];
                }
                else
                {
                    isNone = true;
                    break;
                }
            }
            
            answer[i] = isNone ? -1 : count;
        }
        
        return answer;
    }
}