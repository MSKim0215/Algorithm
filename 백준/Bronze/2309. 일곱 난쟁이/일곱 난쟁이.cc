#include <bits/stdc++.h>

using namespace std;

int n = 9, r = 7;
int target[9];

void CheckTotalSum()
{
    int totalSum = 0;
    for(int i = 0; i < r; i++)
    {
        totalSum += target[i];
    }
    
    if(totalSum == 100)
    {
        sort(target, target + 7);    // 오름차순 정렬
        
        for(int i = 0; i < r; i++)
        {
            cout << target[i] << "\n";
        }
        exit(0);    // 메인 로직 종료
    }
}

void MakePermutation(int n, int r, int depth)
{
    if(r == depth)
    {
        CheckTotalSum();
        return;
    }
    
    for(int i = depth; i < n; i++)
    {
        swap(target[i], target[depth]);
        MakePermutation(n, r, depth + 1);
        swap(target[i], target[depth]);
    }
}

int main()
{
    int inputHeight = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> inputHeight;
        target[i] = inputHeight;
    }
    
    MakePermutation(n, r, 0);
}