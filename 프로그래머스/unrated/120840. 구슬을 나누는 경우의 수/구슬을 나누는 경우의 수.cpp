#include <string>
#include <vector>

using namespace std;

__int128 solution(int balls, int share)
{
    __int128 numerator = 1;      // 분자 n!
    __int128 denominator = 1;    // 분모 (n - m)!
    __int128 denominator2 = 1;   // 분모 m!
    
    for(int i = 1; i <= balls; i++)
    {
        numerator *= i;
    }
    
    for(int i = 1; i <= (balls - share); i++)
    {
        denominator *= i;
    }
    
    for(int i = 1; i <= share; i++)
    {
        denominator2 *= i;
    }
    
    return numerator / (denominator * denominator2);
}