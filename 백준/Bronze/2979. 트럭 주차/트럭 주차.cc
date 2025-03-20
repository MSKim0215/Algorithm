#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int timeCheck[100] { 0, };
    for(int i = 0; i < 3; i++)
    {
        int input, output;
        cin >> input >> output;
        
        for(int j = input; j < output; j++)
        {
            timeCheck[j - 1]++;
        }
    }
    
    int totalSum = 0;
    for(int i = 0; i < 100; i++)
    {
        if(timeCheck[i] == 0) continue;
        
        if(timeCheck[i] == 1) totalSum += (timeCheck[i] * A);
        else if(timeCheck[i] == 2) totalSum += (timeCheck[i] * B);
        else if(timeCheck[i] == 3) totalSum += (timeCheck[i] * C);
    }
    
    cout << totalSum << endl;
}