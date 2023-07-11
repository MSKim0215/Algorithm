#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int changeTypeA = stoi(to_string(a) + to_string(b));
    int changeTypeB = stoi(to_string(b) + to_string(a));
    
    if(changeTypeA < changeTypeB) return changeTypeB;  
    return changeTypeA;
}