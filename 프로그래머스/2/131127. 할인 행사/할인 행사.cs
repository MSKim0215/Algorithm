using System;
using System.Collections.Generic;

public class Solution 
{
    public int solution(string[] want, int[] number, string[] discount)
    {
        var answerDict = new Dictionary<string, int>();
        
        for(int i = 0; i < want.Length; i++)
        {
            var wanted = want[i];
            if(!Array.Exists(discount, value => value.Equals(wanted)))
            {   // 할인 목록에서 내가 원하는 물품이 없다면 함수 종료
                return 0;
            }
            
            answerDict.Add(wanted, 0);
        }
        
        int answer = 0;
        int startDay = 0;   // 가입 일자        
        while(true)
        {
            var wantedDict = new Dictionary<string, int>(answerDict);
            var loopCount = startDay + 10 > discount.Length ? discount.Length : startDay + 10;
            for(int i = startDay; i < loopCount; i++)
            {
                if(wantedDict.ContainsKey(discount[i]))
                {  
                    wantedDict[discount[i]]++;
                }
            }

            bool isCheck = true;
            for(int i = 0; i < want.Length; i++)
            {
                if(wantedDict[want[i]] < number[i])
                {
                    isCheck = false;
                    break;
                }
            }
            
            if(isCheck)
            {
                answer++;
            }

            startDay++;
            
            if(startDay > discount.Length) break;
        }
        
        return answer;
    }
}