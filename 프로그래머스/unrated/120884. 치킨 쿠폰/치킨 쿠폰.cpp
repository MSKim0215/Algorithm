#include <string>
#include <vector>

using namespace std;

int solution(int chicken)
{
    int answer = 0;     // 서비스 치킨 개수
    int coupon = 0;     // 쿠폰 치킨
        
    while(true)
    {
        if(chicken < 10) break;
        
        coupon = chicken % 10;
        chicken /= 10;
        
        answer += chicken;
        chicken += coupon;
    }
    
    return answer;
}