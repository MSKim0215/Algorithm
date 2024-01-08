#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int solution(int k, int m, vector<int> score)
{
    int answer = 0;
    
    // 1. 점수를 내림차순을 한다.
    sort(score.begin(), score.end(), comp);
    
    // 2. 나올 수 있는 상자의 개수를 구한다.
    int box_count = score.size() / m;

    if(box_count <= 0) return answer;       // 한 상자가 되지 않는다면 0으로 리턴
    
    // 3. (최저 사과 점수) x (한 상자에 담긴 사과 개수) x (상자의 개수)
    int index = 0;
    for(int i = 1; i <= box_count; i++)
    {
        int result = score[index + m - 1] * m * 1;
        index += m;
        
        answer += result;
    }
    
    return answer;
}