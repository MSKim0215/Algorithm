#include <string>
#include <vector>

using namespace std;

#define GENERAL 5
#define SOLDIER 3
#define WORKER 1

int solution(int hp) {
    int answer = 0;
    
    if(hp / GENERAL > 0)
    {
        answer = hp / GENERAL;
        hp %= GENERAL;
    }
    
    if(hp / SOLDIER > 0)
    {
        answer += (hp / SOLDIER);
        hp %= SOLDIER;
    }
    
    if(hp / WORKER > 0)
    {
        answer += (hp / WORKER);
        hp %= WORKER;
    }
    
    return answer;
}