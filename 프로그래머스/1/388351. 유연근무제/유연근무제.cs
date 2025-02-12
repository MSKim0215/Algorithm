using System;

public class Solution 
{
    private int GetAllowTime(int scheduleTime)
    {
        int hour = scheduleTime / 100;
        int minute = scheduleTime % 100;

        hour += (minute / 60);
        minute = minute % 60;

        return hour * 100 + minute;
    }
    
    public int solution(int[] schedules, int[,] timelogs, int startday) 
    {   // startDay: 6, 7 제외
        int answer = 0;         // 상품 받을 수 있는 당첨자수
        
        for(int i = 0; i < timelogs.GetLength(0); i++)
        {
            int tempDay = startday;
            int count = 0;  // 정시 출근 체크
            int weekCount = 0;  // 주말 체크
            
            for(int j = 0; j < timelogs.GetLength(1); j++)
            {
                if(tempDay != 6 && tempDay != 7)
                {   // 토, 일이 아니라면 이벤트 체크
                    var allowTime = GetAllowTime(schedules[i] + 10);  // 출근 인정 시각
                    var workStartTime = timelogs[i, j];
                    
                    if(allowTime >= workStartTime)
                    {   // 허용된 시간보다 일찍 출근했다면
                        count++;
                    }
                }
                else
                {   // 주말이라면
                    weekCount++;
                }
                
                tempDay = (tempDay + 1 >= 8) ? 1 : tempDay + 1;     // 일요일이 지나면 월요일로 변경
            }
            
            answer += (count + weekCount == 7) ? 1 : 0;     // 이벤트 당첨
        }
        
        return answer;
    }
}