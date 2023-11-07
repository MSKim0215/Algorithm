#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    sort(numbers.begin(), numbers.end());       // 현재 주어진 벡터를 오름차순 정렬
    
    // 만약, 음수가 존재한다면 정렬을 했을 때 앞의 배열이 모두 음수
    int negNum = numbers[0] * numbers[1];       
    // 맨 뒤의 숫자들을 numbers가 모두 음수가 아닌 이상 양수
    int posNum = numbers[numbers.size() - 1] * numbers[numbers.size() - 2]; 
    
    if(negNum < posNum) return posNum;
    return negNum;
}