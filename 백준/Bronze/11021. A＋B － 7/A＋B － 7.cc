#include<iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << "Case #" << (i + 1) << ": " << A + B << "\n";
    }
}