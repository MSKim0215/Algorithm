using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(string today, string[] terms, string[] privacies)
    {
        List<int> answer = new List<int>();
        
        var splitToday = today.Split(".");  // 0: 년, 1: 월, 2: 일
        
        Dictionary<string, int> termsDict = new Dictionary<string, int>();  // 약관 종류, 유효기간
        for(int i = 0; i < terms.Length; i++)
        {
            var splitTerms = terms[i].Split(" ");
            termsDict.Add(splitTerms[0], int.Parse(splitTerms[1]) * 28);
        }
        
        for(int i = 0; i < privacies.Length; i++)
        {
            var splitPrivacies = privacies[i].Split(" ");
            var splitPrivaciesDate = splitPrivacies[0].Split(".");
            
            var termsDay = int.Parse(splitPrivaciesDate[2]) + termsDict[splitPrivacies[1]] - 1;            
            var termsMonth = int.Parse(splitPrivaciesDate[1]) + termsDay / 28;

            bool isMonth = termsDay % 28 == 0;
            termsDay = isMonth ? 28 : termsDay % 28;
            termsMonth = isMonth ? termsMonth - 1 : termsMonth;
             
            var termsYear = int.Parse(splitPrivaciesDate[0]) + termsMonth / 12;

            bool isYear = termsMonth % 12 == 0;
            termsMonth = isYear ? 12 : termsMonth % 12;
            termsYear = isYear ? termsYear - 1 : termsYear;
            
            if (int.Parse(splitToday[0]) > termsYear || 
                (int.Parse(splitToday[0]) == termsYear && int.Parse(splitToday[1]) > termsMonth) || 
                (int.Parse(splitToday[0]) == termsYear && int.Parse(splitToday[1]) == termsMonth && int.Parse(splitToday[2]) > termsDay))
            {
                answer.Add(i + 1);
            }
        }
        
        return answer.ToArray();
    }
}