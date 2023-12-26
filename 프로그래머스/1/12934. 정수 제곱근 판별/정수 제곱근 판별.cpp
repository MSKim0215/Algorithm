#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long targetNum = 1;
    bool isFind = false;
    
    while(true)
    {
        if(pow(targetNum, 2) == n)
        {
            isFind = true;
            break;
        }
        else if(pow(targetNum, 2) > n)
        {
            break;
        }
        
        targetNum++;
    }
    
    if(!isFind) return -1;
    return pow(targetNum + 1, 2);
}