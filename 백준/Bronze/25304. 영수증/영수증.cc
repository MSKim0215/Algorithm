#include<iostream>

using namespace std;

int main()
{
    int X;        // 총금액
    cin >> X;
    
    int N;        // 종류
    cin >> N;
    
    int result = 0;
    
    for(int i = 0; i < N; i++)
    {
        int a,b;
        cin >> a >> b;
        result += (a * b);
    }
    
    if(result == X) cout << "Yes";
    else cout << "No";
}