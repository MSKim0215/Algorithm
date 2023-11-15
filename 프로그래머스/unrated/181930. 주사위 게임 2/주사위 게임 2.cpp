#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) 
{
    int answer = a + b + c;
    
    // 세 숫자가 모두 다르다면 a + b + c
    if(a != b && b != c && a != c) return answer;
    
    answer *= (pow(a, 2) + pow(b, 2) + pow(c, 2));
    
    // 두 숫자는 같고 다른 숫자는 다르다면 (a + b + c) x (a^2 + b^2 + c^2)
    if((a == b && b != c) || (b == c && a != b) || (a == c && a != b)) return answer;
    
    answer *= (pow(a, 3) + pow(b, 3) + pow(c, 3));
    
    // 세 숫자가 모두 같다면 (a + b + c) x (a^2 + b^2 + c^2) x (a^3 + b^3 + c^3)
    if(a == b && b == c) return answer;
}