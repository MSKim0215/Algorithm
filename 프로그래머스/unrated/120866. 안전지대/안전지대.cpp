#include <string>
#include <vector>
#include <map>

using namespace std;

void CheckWarningZone(map<int, bool>& warningZone, int index)
{
    bool isContain = (warningZone.find(index) != warningZone.end());
    
    if(isContain)
    {
        if(!warningZone[index])
        {
            warningZone[index] = true;
        }
    }
}

bool CheckExistPos(int x, int y, int boardSize)
{
    bool isExist_X = (x >= 0 && x < boardSize);
    bool isExist_Y = (y >= 0 && y < boardSize);
    
    if(isExist_X && isExist_Y) return true;
    return false;
}

void ActiveWarningZone(int x, int y, int boardSize, map<int, bool>& warningZone)
{
    if(CheckExistPos(x, y, boardSize))
    {
        CheckWarningZone(warningZone, x * boardSize + y);
    }
}

int solution(vector<vector<int>> board) 
{
    map<int, bool> warningZone;     // key: 보드 인덱스, value: 위험 유무
    int boardSize = board.size();   // 보드 크기 (가로, 세로)
    
    // 1. 모든 좌표의 주의 표기를 false로 초기화
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            int targetIndex = i * board.size() + j;
            warningZone.insert({targetIndex, false});
        }
    }
    
    // 2. 배열을 순회하며 위험 지역 판단
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if(board[i][j] == 1)
            {   // 지뢰 지역이라면 주의 표기 활성화
                ActiveWarningZone(i, j, boardSize, warningZone);            // 중앙
                ActiveWarningZone(i, j + 1, boardSize, warningZone);        // 위
                ActiveWarningZone(i + 1, j + 1, boardSize, warningZone);    // 오른위
                ActiveWarningZone(i + 1, j, boardSize, warningZone);         // 오른
                ActiveWarningZone(i + 1, j - 1, boardSize, warningZone);   // 오른아래
                ActiveWarningZone(i, j - 1, boardSize, warningZone);         // 아래
                ActiveWarningZone(i - 1, j - 1, boardSize, warningZone);   // 왼아래
                ActiveWarningZone(i - 1, j, boardSize, warningZone);         // 왼
                ActiveWarningZone(i - 1, j + 1, boardSize, warningZone);   // 왼위
            }
        }
    }
    
    // 3. WarningZone 주의 표기 개수 체크
    int answer = 0;
    for(auto iter = warningZone.begin(); iter != warningZone.end(); iter++)
    {
        if(!iter->second)
        {   // true라면 카운팅
            answer++;
        }
    }
    
    return answer;
}