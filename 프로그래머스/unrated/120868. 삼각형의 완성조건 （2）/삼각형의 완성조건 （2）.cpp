#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> sides)
{
    // 가장 큰 수, 작은 수 구분 짓기
    int small_num = min(sides[0], sides[1]);
    int big_num = max(sides[0], sides[1]);
    
    int answer = 0;     // 찾은 숫자 개수
    
    // 1. 가장 큰 숫자가 가장 긴 변일 경우
    for(int i = 1; i <= big_num; i++)
    {
        if(i + small_num > big_num)
        {   // 가장 긴 변이 나머지 두 변의 합보다 작아야함
            answer++;
        }
    }
    
    // 2. 나머지 한 변이 가장 긴 변일 경우
    for(int i = big_num + 1; ; i++)
    {
        if(big_num + small_num > i)
        {
            answer++;
        }
        else break;
    }
    
    return answer;
}