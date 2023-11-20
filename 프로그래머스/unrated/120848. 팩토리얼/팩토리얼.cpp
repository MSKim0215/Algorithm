#include <string>
#include <vector>

using namespace std;

long long Factorial(int num)
{
    if(num <= 1) return 1;
    else return num * Factorial(num - 1);
}

int solution(int n) 
{
    int count = 1;
    int result;
    
    while(true)
    {
        result = Factorial(count);
        
        if(result >= n) break;
        
        count++;
    }
    
    if(result == n) return count;
    return count - 1;
}