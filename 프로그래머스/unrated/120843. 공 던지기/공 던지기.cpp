#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k)
{
    int answer = 0;         // 리턴 값
    int count = k;          // 움직임 횟수
    int currIndex = 0;      // 현재 인덱스 
    
    while(true)
    {
        answer = numbers[currIndex];
        
        count--;          // 움직임 횟수 감소
        currIndex += 2;   // 현재 인덱스 이동
        
        if(currIndex >= numbers.size())
        {   // 최대 인덱스를 초과하면 인덱스 위치 수정
            currIndex = currIndex - numbers.size();
        }
        
        if(count <= 0) break;
    }
    
    return answer;
}