using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{
    private class ReportData
    {
        public string targetUser;   // 신고 당한 유저
        public List<string> reportUserList;    // 신고한 유저
        public int reportCount;  // 신고 당한 횟수
        
        public ReportData(string targetUser)
        {
            this.targetUser = targetUser;
            reportUserList = new List<string>();
            reportCount = 0;
        }
        
        public bool IsContainReport(string reportUser)
        {
            return reportUserList.Contains(reportUser);
        }
        
        public bool IsBanned(int count)
        {
            return count <= reportCount;
        }
    }
    
    public int[] solution(string[] id_list, string[] report, int k) 
    {
        Dictionary<string, int> resultDict = new Dictionary<string, int>(); // key: 신고한 사람, value: 신고 결과 메일 개수     
        List<ReportData> reportDatas = new List<ReportData>();
        
        for(int i = 0; i < id_list.Length; i++)
        {
            resultDict.Add(id_list[i], 0);
            reportDatas.Add(new ReportData(id_list[i]));
        }
        
        for(int i = 0; i < report.Length; i++)
        {
            var splitReport = report[i].Split(" ");
            var reportID = splitReport[0];
            var targetID = splitReport[1];
            
            var reportData = reportDatas.FirstOrDefault(data => data.targetUser == targetID);
            if(!reportData.IsContainReport(reportID))
            {
                reportData.reportCount++;
                reportData.reportUserList.Add(reportID);
            }
        }
        
        for(int i = 0; i < reportDatas.Count; i++)
        {
            var reportData = reportDatas[i];       
            if(reportData.IsBanned(k))
            {
                for(int j = 0; j < reportData.reportUserList.Count; j++)
                {
                    var reportUser = reportData.reportUserList[j];
                    resultDict[reportUser]++;
                }
            }
        }
        
        return resultDict.Values.ToArray();
    }
}