using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{    
    public string[] solution(string[] players, string[] callings)
    {
        var playerList = players.ToList();
        var playerDict = new Dictionary<string, int>(); // key: 선수이름, value: 등수
        
        for(int i = 0; i < players.Length; i++)
        {
            playerDict.Add(players[i], i);
        }
        
        for(int i = 0; i < callings.Length; i++)
        {
            int playerIndex = playerDict[callings[i]];
            
            var tempName = playerList[playerIndex];
            playerList[playerIndex] = playerList[playerIndex - 1];
            playerList[playerIndex - 1] = tempName;
            
            playerDict[callings[i]] = playerIndex - 1;
            playerDict[playerList[playerIndex]] = playerIndex;
        }
        
        return playerList.ToArray();
    }
}