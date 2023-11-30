#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) 
{
    int answer = 0;
    
    // M: 가로, N: 세로
    
    answer += (M - 1);      // 가로
    answer += M * (N - 1);  // 세로
    
    return answer;
}