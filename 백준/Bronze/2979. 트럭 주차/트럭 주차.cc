#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    vector<int> timeVec[3];
    for(int i = 0; i < 3; i++)
    {
        int input, output;
        cin >> input >> output;
        
        timeVec[i].push_back(input);
        timeVec[i].push_back(output);
    }
    
    int totalSum = 0;
    for(int i = 1; i <= 100; i++)
    {
        int count = 0;
        
        if(timeVec[0][0] <= i && timeVec[0][1] > i) count++;   
        if(timeVec[1][0] <= i && timeVec[1][1] > i) count++;
        if(timeVec[2][0] <= i && timeVec[2][1] > i) count++;
        
        if(count == 1)  totalSum += (A * count);
        else if(count == 2) totalSum += (B * count);
        else if(count == 3) totalSum += (C * count);
    }
    
    cout << totalSum << endl;
}