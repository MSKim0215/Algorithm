using System;

public class Solution
{    
    public int[,] solution(int n)
    {
        int[,] answer = new int[n, n];
        int[,] direction = new int[,]
        {
            {0, 1},     // 오른쪽
            {1, 0},     // 아래쪽
            {0, -1},    // 왼쪽
            {-1, 0}     // 위쪽
        };
        
        int dir = 0;    // 현재 방향
        int currX = 0, currY = 0;   // 현재 위치
        
        for(int i = 1; i <= n * n; i++)
        {
            answer[currX, currY] = i;
            
            int nextX = currX + direction[dir, 0];
            int nextY = currY + direction[dir, 1];
            
            if(nextX < 0 || nextX >= n || nextY < 0 || nextY >= n || answer[nextX, nextY] != 0)
            {
                dir = (dir + 1) % 4;
                nextX = currX + direction[dir, 0];
                nextY = currY + direction[dir, 1];
            }
            
            currX = nextX;
            currY = nextY;
        }
        
        return answer;
    }
}