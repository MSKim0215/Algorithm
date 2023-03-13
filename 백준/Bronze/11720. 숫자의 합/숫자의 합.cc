#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 개행 문자 제거

    int sum = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        sum += c - '0';
    }

    cout << sum << endl;
}