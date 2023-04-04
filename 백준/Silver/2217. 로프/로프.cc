#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, max_weight = 0;
    cin >> N;
    
    vector<int> ropes(N, 0);  
    for (int i = 0; i < N; i++) {
        cin >> ropes[i];
    }

    sort(ropes.begin(), ropes.end()); // 로프의 중량을 오름차순으로 정렬

    for (int i = 0; i < ropes.size(); i++) {
        max_weight = max(max_weight, ropes[i] * (N - i)); // 각 로프가 들 수 있는 최대 중량 계산
    }

    cout << max_weight;
}
