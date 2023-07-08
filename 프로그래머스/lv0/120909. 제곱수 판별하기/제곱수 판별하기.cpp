#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int number = 1;
    
    while(true)
    {
        if(number * number == n) return 1;
        if(number * number > n) return 2;
        number++;
    }
    
    return answer;
}