#include<iostream>

using namespace std;

int main()
{
    double inputA, inputB;
    
    cin >> inputA;
    cin >> inputB;
    
    cout.precision(10);        // 상대오차 10⁻⁹
    cout << inputA / inputB;
}