#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int count = 0;
    long long tempNum = num;
    
    while(true)
    {
        if(count >= 500 || tempNum == 1) break;
        
        if(tempNum % 2 == 0)
        {
            tempNum /= 2;
        }
        else
        {
            tempNum = tempNum * 3 + 1;
        }
        
        count++;
    }
    
    if(count >= 500) return -1;
    return count;
}