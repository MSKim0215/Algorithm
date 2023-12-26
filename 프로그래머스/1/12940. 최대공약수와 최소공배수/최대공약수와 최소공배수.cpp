#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    answer.push_back(__gcd(n, m));
    answer.push_back(n * m / __gcd(n, m));
    
    return answer;
}