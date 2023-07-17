#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int startIndex = (total / num) - (num / 2);
    int endIndex = (total / num) + (num / 2);
    
    if(num % 2 == 0)
    {   // TODO: num 짝수
        startIndex = (total / num) - (num / 2) + 1;
    }
    
    for(int i = startIndex; i <= endIndex; i++)
    {   
        answer.push_back(i);
    }
    
    return answer;
}