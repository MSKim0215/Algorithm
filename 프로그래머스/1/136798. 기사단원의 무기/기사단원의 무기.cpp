#include <string>
#include <vector>

using namespace std;

int factor_count(int a)
{
    if(a <= 0) return 0;
    
    int answer = 0;
    
    for(int i = 1; i <= a / 2; i++)
    {
        if(a % i == 0) answer++;
    }
    
    return answer + 1;
}

int solution(int number, int limit, int power)
{
    // number: 기사단원의 수
    // limit: 공격력 제한 수치
    // power: 보정 공격력
    // 공격력 : 철 = 1 : 1
    
    int answer = 0;
    
    for(int i = 1; i <= number; i++)
    {
        int my_power = factor_count(i);
        if(my_power > limit)
        {
            my_power = power;
        }
        
        answer += my_power;
    }
    
    return answer;
}