#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 2 * a * b;
    string calculate = to_string(a) + to_string(b);
    int result = stoi(calculate);
    
    return (answer >= result ) ? answer : result;
}