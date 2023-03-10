#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int totalSum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        totalSum += i;
    }
    cout << totalSum;
}