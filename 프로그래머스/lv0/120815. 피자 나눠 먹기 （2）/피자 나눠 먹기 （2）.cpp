#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int result = 0, answer = 0;
    
    while(true)
    {
        result += 6;
        answer++;
        if(result % n == 0) break;
    }
    
    return answer;
}