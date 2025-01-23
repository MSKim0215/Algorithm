#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w)
{   // h: y, w: x
    int answer = 0;
    string targetColor = board[h][w];
  
    if(h + 1 < board.size())
    {   // 1. 위
        if(board[h + 1][w] == targetColor) answer++;
    }
    
    if(h - 1 >= 0)
    {   // 2. 아래
        if(board[h - 1][w] == targetColor) answer++;
    }
    
    if(w + 1 < board[0].size())
    {   // 3. 오른쪽
        if(board[h][w + 1] == targetColor) answer++;
    }
    
    if(w - 1 >= 0)
    {   // 4. 왼쪽
        if(board[h][w - 1] == targetColor) answer++;
    }
    
    return answer;
}