#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {    // 층
        for(int j = N - 1; j > i; j--)
        {    // 공백 개수
            cout << " ";
        }
        
        for(int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n"; 
    }
}