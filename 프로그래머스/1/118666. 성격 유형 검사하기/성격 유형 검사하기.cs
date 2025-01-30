using System;
using System.Collections.Generic;

public class Solution 
{
    public string solution(string[] survey, int[] choices) 
    {
        Dictionary<char, int> scoreDict = new Dictionary<char, int>()
        {
            { 'R', 0 }, { 'T', 0 },
            { 'C', 0 }, { 'F', 0 },
            { 'J', 0 }, { 'M', 0 },
            { 'A', 0 }, { 'N', 0 }
        };
            
        for(int i = 0; i < survey.Length; i++)
        {
            for(int j = 0; j < survey[i].Length; j++)
            {
                if(!scoreDict.ContainsKey(survey[i][j])) 
                {
                    scoreDict.Add(survey[i][j], 0);
                }
            }
        }
        
        for(int i = 0; i < choices.Length; i++)
        {
            switch(choices[i])
            {
                case 1: scoreDict[survey[i][0]] += 3; break;
                case 2: scoreDict[survey[i][0]] += 2; break;
                case 3: scoreDict[survey[i][0]] += 1; break;
                case 5: scoreDict[survey[i][1]] += 1; break;
                case 6: scoreDict[survey[i][1]] += 2; break;
                case 7: scoreDict[survey[i][1]] += 3; break;
            }
        }
        
        string answer = string.Empty;
        answer += ((scoreDict['R'] >= scoreDict['T']) ? "R" : "T");
        answer += ((scoreDict['C'] >= scoreDict['F']) ? "C" : "F");
        answer += ((scoreDict['J'] >= scoreDict['M']) ? "J" : "M");
        answer += ((scoreDict['A'] >= scoreDict['N']) ? "A" : "N");
        
        return answer;
    }
}