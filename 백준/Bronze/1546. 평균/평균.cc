#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<double> scores(N);
    double max_score = 0;

    // 점수 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
        max_score = max(max_score, scores[i]);
    }

    double total = 0;
    for (int i = 0; i < N; i++) {
        scores[i] = scores[i] / max_score * 100;
        total += scores[i];
    }

    cout << fixed;
    cout.precision(2);
    cout << total / N << endl;
}
