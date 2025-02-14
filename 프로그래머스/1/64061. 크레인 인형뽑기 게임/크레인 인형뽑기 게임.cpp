#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    vector<int> buckets;
    
    for(int i = 0; i < moves.size(); i++)
    {
        int targetLine = moves[i] - 1;  // 집을 위치
        
        for(int j = 0; j < board.size(); j++)
        {
            if(board[j][targetLine] != 0)
            {
                buckets.push_back(board[j][targetLine]);
                board[j][targetLine] = 0;
                break;
            }
        }
    }
    
    int answer = 0;   
    while(true)
    {
        int prevNumber = buckets[buckets.size() - 1];
        bool isNotFound = true;
        
        for(int i = buckets.size() - 2; i >= 0; i--)
        {
            if(prevNumber == buckets[i])
            {   // 같으면 터트림
                prevNumber = buckets[i + 2];
                
                answer += 2;
                isNotFound = false;
                
                buckets.erase(buckets.begin() + i, buckets.begin() + i + 2);
                break;
            }
            
            prevNumber = buckets[i];
        }
  
        if(isNotFound) break;
    }
    
    return answer;
}