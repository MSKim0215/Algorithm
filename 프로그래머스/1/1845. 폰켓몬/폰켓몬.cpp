#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> nums)
{
    // 1. 골라야 하는 개수를 구한다.
    int want_count = nums.size() / 2;
    
    // 2. 정렬 뒤, 중복을 제거한다.
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    if(want_count <= nums.size()) return want_count;
    return nums.size();
}