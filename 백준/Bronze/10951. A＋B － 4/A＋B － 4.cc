#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(true)
    {
        int A, B;
        cin >> A >> B;
        if(cin.eof()) break;
        cout << A + B << "\n";
    }
}