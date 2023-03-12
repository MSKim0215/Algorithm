#include<iostream>

using namespace std;

int main()
{
    int nums[100];
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    
    int count = 0;
    int targetIndex;
    cin >> targetIndex;
    
    for(int i = 0; i < N; i++)
    {
        if(nums[i] == targetIndex)
        {
            count++;
        }
    }
    
    cout << count;
}