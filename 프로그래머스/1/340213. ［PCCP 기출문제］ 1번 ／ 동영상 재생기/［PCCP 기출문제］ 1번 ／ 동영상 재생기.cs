using System;

public class Solution 
{
    private DateTime GetParsingTime(string targetTime)
    {
        return DateTime.Parse("00:" + targetTime);
    }
    
    private bool IsInOpeningTime(DateTime posTime, DateTime startTime, DateTime endTime)
    {
        return posTime >= startTime && posTime <= endTime;
    }
    
    private void RefreshPosFromOpening(ref DateTime posTime, DateTime startTime, DateTime endTime)
    {
        if(IsInOpeningTime(posTime, startTime, endTime))
        {
            posTime = endTime;
        }
    }
    
    public string solution(string video_len, string pos, string op_start, string op_end, string[] commands)
    {
        var videoTime = GetParsingTime(video_len);
        var posTime = GetParsingTime(pos);
        var startTime = GetParsingTime(op_start);
        var endTime = GetParsingTime(op_end);

        for(int i = 0; i < commands.Length; i++)
        {
            RefreshPosFromOpening(ref posTime, startTime, endTime);
            
            if(commands[i] == "next")
            {
                posTime = posTime.AddSeconds(10) > videoTime ? videoTime : posTime.AddSeconds(10);
            }
            else if(commands[i] == "prev")
            {
                posTime = posTime.AddSeconds(-10) < GetParsingTime("00:00") ? GetParsingTime("00:00") : posTime.AddSeconds(-10);
            }
            
            RefreshPosFromOpening(ref posTime, startTime, endTime);
        }
        
        return string.Format("{0:D2}:{1:D2}", posTime.Minute, posTime.Second);
    }
}