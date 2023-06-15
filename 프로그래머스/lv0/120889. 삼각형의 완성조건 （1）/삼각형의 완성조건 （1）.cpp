#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    
    int sum = 0;    
    for(int i = 0; i < sides.size() - 1; i++)
    {
        sum += sides[i];
    }
    
    return (sum > sides[sides.size() - 1]) ? 1 : 2;
}