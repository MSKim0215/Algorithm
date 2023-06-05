#include <string>
#include <vector>

using namespace std;

// n: 양꼬치 개수, k: 음료수 개수
int solution(int n, int k) {
    // 양꼬치: 12000원
    // 음료수: 2000원
    int free = (n / 10);    // 서비스로 지급하는 음료수
    
    return (n * 12000) + ((k - free) * 2000);
}