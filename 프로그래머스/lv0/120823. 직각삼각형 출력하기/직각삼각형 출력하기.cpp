#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int count = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < count; j++)
        {
            cout << "*";
        }
        count++;
        cout << "\n";
    }
    
    return 0;
}