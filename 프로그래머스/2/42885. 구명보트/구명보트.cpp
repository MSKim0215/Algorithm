#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;
    int left = 0;
    int right = people.size() - 1;
    
    sort(people.begin(), people.end(), greater<int>());
    
    while(left <= right)
    {
        if(people[left] + people[right] <= limit)
        {   // 두명 탈 수 있을 경우
            left++;
            right--;
            answer++;
        }
        else
        {   // 두명 다 못탈 경우
            left++;
            answer++;
        }
    }
    return answer;
}