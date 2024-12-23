using System;

public class Solution 
{
    public int solution(int[,] board, int k) 
    {
        int targetX = board.GetLength(0);
        int targetY = board.GetLength(1);
        
        int answer = 0;
        
        for(int i = 0; i < targetX; i++)
        {
            for(int j = 0; j < targetY; j++)
            {
                if(i + j <= k)
                {
                    answer += board[i, j];
                }
            }
        }
        
        return answer;
    }
}