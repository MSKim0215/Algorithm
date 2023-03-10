#include<iostream>

using namespace std;

int main()
{
    int InputA, InputB, tempB;
    
    cin >> InputA;
    cin >> InputB;
    
    tempB = InputB;
    
    int one = tempB % 10;
    tempB /= 10;
    
    int ten = tempB % 10;
    tempB /= 10;
    
    int hund = tempB % 10;
    tempB /= 10;
    
    cout << InputA * one << endl;
    cout << InputA * ten << endl;
    cout << InputA * hund << endl;
    cout << InputA * InputB << endl;
}