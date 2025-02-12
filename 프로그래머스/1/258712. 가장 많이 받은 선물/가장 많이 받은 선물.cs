using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{
    private class GiftData
    {
        private string giveFriend;       // 준 사람
        private Dictionary<string, int> getFriendDict;   // 받은사람, 받은횟수
        
        public int giftCount = 0;       // 선물 지수
        
        public GiftData(string giveName, string[] friends)
        {
            giveFriend = giveName;
            getFriendDict = new Dictionary<string, int>();
            
            for(int i = 0; i < friends.Length; i++)
            {
                if(friends[i] != giveFriend)
                {
                    getFriendDict.Add(friends[i], 0);
                }
            }
        }
        
        public void AddGetData(string targetFriend)
        {   // 받은사람 데이터 갱신
            getFriendDict[targetFriend]++;
        }
        
        public int GetTotalGiveCount()
        {   // 준 선물의 총 개수
            var giveCount = 0;
            
            foreach(var getFriend in getFriendDict)
            {
                giveCount += getFriend.Value;
            }
            
            return giveCount;
        }
        
        public int GetGiveCount(string targetFriend)
        {   // 해당 친구에게 준 선물의 개수
            return getFriendDict[targetFriend]; 
        }
    }
    
    public int solution(string[] friends, string[] gifts) 
    {
        var giftDataDict = new Dictionary<string, GiftData>();
        var nextCountDict = new Dictionary<string, int>();
        
        // 1. giftdata, nextCount 세팅
        for(int i = 0; i < friends.Length; i++)
        {
            var giftData = new GiftData(friends[i], friends);
            giftDataDict.Add(friends[i], giftData);
            
            nextCountDict.Add(friends[i], 0);
        }
        
        // 2. 선물 준 사람의 데이터 갱신
        for(int i = 0; i < gifts.Length; i++)
        {
            var splitGift = gifts[i].Split(" ");
            var giveFriend = splitGift[0];       // 준 사람
            var getFriend = splitGift[1];      // 받은 사람
            
            giftDataDict[giveFriend].AddGetData(getFriend);
        }
        
        // 3. 준 선물과 받은 선물을 기반으로 선물 지수 계산
        for(int i = 0; i < friends.Length; i++)
        {
            var giveCount = giftDataDict[friends[i]].GetTotalGiveCount();   // 내가 준 선물 횟수
            var getCount = 0;       // 내가 받은 선물 횟수
            
            for(int j = 0; j < friends.Length; j++)
            {
                if(friends[i] != friends[j])
                {   // 나 자신을 제외
                    getCount += giftDataDict[friends[j]].GetGiveCount(friends[i]);
                }
            }
            
            giftDataDict[friends[i]].giftCount = giveCount - getCount;      // 선물 지수 세팅
        }
        
        // 4. 준 선물을 받은 사람이 그 사람에게 선물을 얼마나 줬는지 비교
        for(int i = 0; i < friends.Length; i++)
        {
            var giveFriend = friends[i];
            
            for(int j = 0; j < friends.Length; j++)
            {
                var getFriend = friends[j];
                if(giveFriend == getFriend) continue;
                
                var giveFriendGiveCount = giftDataDict[giveFriend].GetGiveCount(getFriend);
                var getFriendGiveCount = giftDataDict[getFriend].GetGiveCount(giveFriend);
               
                if(giveFriendGiveCount > getFriendGiveCount)
                {   // 받은 사람이 그 사람이 준 횟수보다 적을 경우
                    nextCountDict[giveFriend]++;
                }
                else if(giveFriendGiveCount < getFriendGiveCount)
                {   // 받은 사람이 그 사람이 준 횟수보다 클 경우
                    nextCountDict[getFriend]++;
                }
                else
                {   // 주고 받은 횟수가 없거나, 같다면
                    if(giftDataDict[giveFriend].giftCount > giftDataDict[getFriend].giftCount)
                    {   // 선물 지수가 더 큰 사람에게 선물 줌
                        nextCountDict[giveFriend]++;
                    }
                    else if(giftDataDict[giveFriend].giftCount < giftDataDict[getFriend].giftCount)
                    {
                        nextCountDict[getFriend]++;
                    }
                }
            }
        }
        
        // 5. 다음 달에 가장 많이 선물을 받는 횟수 찾기
        int answer = nextCountDict.OrderByDescending(x => x.Value).FirstOrDefault().Value / 2;
        return answer;
    }
}