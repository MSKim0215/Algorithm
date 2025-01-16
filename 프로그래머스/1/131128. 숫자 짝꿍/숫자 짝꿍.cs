using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class Solution
{
    private Dictionary<char, int> GetStringNumberCount(string target)
    {
        var result = new Dictionary<char, int>();
        
        for(int i = 0; i < target.Length; i++)
        {
            var targetChar = target[i];
            if(!result.ContainsKey(targetChar))
            {
                result.Add(targetChar, 1);
            }
            else
            {
                result[targetChar]++;
            }
        }
        
        return result;
    }
    
    public string solution(string X, string Y)
    {
        var xDict = GetStringNumberCount(X);
        var yDict = GetStringNumberCount(Y);

        var commonChars = xDict.Keys.Intersect(yDict.Keys).ToList();
        
        if(commonChars.Count == 0) return "-1";
        if(commonChars.Count == 1 && commonChars.First() == '0') return "0";
        
       var answerBuilder = new StringBuilder();
        foreach(var commonChar in commonChars.OrderByDescending(c => c))
        {
            var minCount = Math.Min(xDict[commonChar], yDict[commonChar]);
            answerBuilder.Append(commonChar, minCount);
        }
        
        return answerBuilder.ToString();
    }
}