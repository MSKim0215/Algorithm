#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(int a, int b)
{
    // 두 수의 최대 공약수를 구한다.
    int greatestFactor = __gcd(a, b);
    
    // 분자, 분모를 약분한다.
    a /= greatestFactor;
    b /= greatestFactor;
    
    bool isCheck = false;
    
    while(true)
    {
        if(b <= 1) break;
        
        if(b % 2 == 0)
        {
            b /= 2;
        }
        else if(b % 5 == 0)
        {
            b /= 5;
        }
        else
        {
            isCheck = true;
            break;
        }
    }
    
    if(isCheck) return 2;
    return 1;
}