#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> num = { a, b, c, d };
    
    sort(num.begin(), num.end());       // 오름차순 정렬
   
    // p: 동일한 값
    // TODO: 네 개의 주사위가 같음 (1111 x p)
    if(num[0] == num[3]) 
        return 1111 * num[0];
    
    // TODO: 같은 값이 두 쌍인 경우 ((p + q) * |p - q|)
    if(num[0] == num[1] && num[2] == num[3]) 
        return ((num[0] + num[2]) * abs(num[0] - num[2]));
    
    // TODO: 같은 값이 세 개인 경우 (10 x p + q)^2
    if(num[1] == num[2] && (num[0] == num[1] || num[2] == num[3]))
        return pow(10 * num[1] + (num[0] != num[1] ? num[0] : num[3]), 2);
    
    // TODO: 모두 다른 값이면 (가장 작은 수)
    if(num[0] != num[1] && num[1] != num[2] && num[2] != num[3]) 
        return num[0];
    
    // TODO: 같은 값이 한 쌍인 경우 (r * q)
    return ((num[0] == num[1]) ? num[2] * num[3] : ((num[1] == num[2]) ? num[0] * num[3] : num[0] * num[1]));
}