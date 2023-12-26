#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int targetNum = 1;
    
    while(true)
    {
        if(n % targetNum == 1)
        {
            break;
        }
        
        targetNum++;
    }
    
    return targetNum;
}