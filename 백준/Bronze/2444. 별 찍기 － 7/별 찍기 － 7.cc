#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {    // Floor
        for(int j = i + 1; j < N; j++)
        {    // Space
            cout << " ";
        }
        
        for(int j = 0; j < 2 * i + 1; j++)
        {    // Star
            cout << "*";
        }
        cout << "\n";
    }
    
    for(int i = 1; i < N; i++)
    {    // Floor
        for(int j = 0; j < i; j++)
        {    // Space
            cout << " ";
        }
        
        for(int j = 0; j < 2 * (N - i) - 1; j++)
        {    // Star
            cout << "*";
        }
        cout << "\n";
    }
}