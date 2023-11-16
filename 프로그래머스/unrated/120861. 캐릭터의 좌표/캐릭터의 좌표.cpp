#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer;     // 캐릭터의 마지막 좌표
    
    int currX = 0;      // 현재 x좌표
    int currY = 0;      // 현재 y좌표
    
    int maxWidth = board[0] / 2;   // 가로
    int maxHeight = board[1] / 2;  // 세로
    
    for(int i = 0; i < keyinput.size(); i++)
    {
        if(keyinput[i] == "up")
        {   // up: y + 1
            if(currY + 1 <= maxHeight)
            {
                currY++;
            }
        }
        else if(keyinput[i] == "down")
        {   // down: y - 1
            if(currY - 1 >= -maxHeight)
            {
                currY--;
            }
        }
        else if(keyinput[i] == "left")
        {   // left: x - 1
            if(currX - 1 >= -maxWidth)
            {
                currX--;
            }
        }
        else if(keyinput[i] == "right")
        {   // right: x + 1
            if(currX + 1 <= maxWidth)
            {
                currX++;
            }
        }
    }
    
    answer.push_back(currX);
    answer.push_back(currY);
    
    return answer;
}