#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    
    int middleIndex = array.size() / 2;
    
    return array[middleIndex];
}