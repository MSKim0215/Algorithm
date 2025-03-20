#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> heightVec;    // 일곱 난쟁이의 키
    
    int totalSum = 0;
    int inputHeight;
    for(int i = 0; i < 9; i++)
    {   // 9명의 키를 입력 받는다.
        cin >> inputHeight;
        heightVec.push_back(inputHeight);
        totalSum += inputHeight;
    }
    
    sort(heightVec.begin(), heightVec.end());   // 오름차순 정렬
    
    do
    {
        int sum = 0;
        for(int i = 0; i < 7; i++)
        {
            sum += heightVec[i];
        }
        
        if(sum == 100) break;
    } while(next_permutation(heightVec.begin(), heightVec.end()));
    
    cout << "\n";
    for(int i = 0; i < 7; i++)
    {
        cout << heightVec[i] << "\n";
    }
}