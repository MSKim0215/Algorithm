using System;

public class Solution 
{
    private void InitializePosition(string[] park, ref int posX, ref int posY)
    {
        for(int i = 0; i < park.Length; i++)
        {
            var parkLine = park[i];
            
            for(int j = 0; j < parkLine.Length; j++)
            {
                var parkSpace = parkLine[j];
                
                if(parkSpace == 'S')
                {
                    posX = j;
                    posY = i;
                    return;
                }
            }
        }
    }
    
    private bool IsCanMove(int posX, int posY, string[] park)
    {
        return posX >= 0 && posX < park[0].Length && posY >= 0 && posY < park.Length && park[posY][posX] != 'X';
    }
    
    private void Move(ref int posX, ref int posY, int dx, int dy, int moveCount, string[] park)
    {
        var tempX = posX;
        var tempY = posY;
        
        while(moveCount > 0)
        {
            tempX += dx;
            tempY += dy;
            
            if(!IsCanMove(tempX, tempY, park)) break;
            
            moveCount--;
        }
        
        if(moveCount <= 0)
        {
            posX = tempX;
            posY = tempY;
        }
    }
    
    public int[] solution(string[] park, string[] routes) 
    {
        int posX = 0, posY = 0;
        
        InitializePosition(park, ref posX, ref posY);
        
        for(int i = 0; i < routes.Length; i++)
        {
            var splitRoute = routes[i].Split(" ");
            var dir = splitRoute[0];
            var moveCount = int.Parse(splitRoute[1]);
            
            switch(dir)
            {
                case "E": Move(ref posX, ref posY, 1, 0, moveCount, park); break;
                case "W": Move(ref posX, ref posY, -1, 0, moveCount, park); break;
                case "S": Move(ref posX, ref posY, 0, 1, moveCount, park); break;
                case "N": Move(ref posX, ref posY, 0, -1, moveCount, park); break;
            }
        }
        
        int[] answer = new int[] { posY, posX };
        return answer;
    }
}