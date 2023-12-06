#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    for(int i = 1; i <= n; i++)
    {
        int count = 0;      // i의 약수 개수
        
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {   // 나누어 떨어진다면 약수
                count++;
            }
        }
        
        if(count >= 3)
        {   // 세 개 이상이라면 합성수
            answer++;
        }
    }
    
    return answer;
}