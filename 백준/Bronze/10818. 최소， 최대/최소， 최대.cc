#include<iostream>

using namespace std;

int GetMax(int _nums[], int _size)
{
    int max = _nums[0];
    for(int i = 0; i < _size; i++)
    {
        if(max < _nums[i])
        {
            max = _nums[i];
        }
    }
    return max;
}

int GetMin(int _nums[], int _size)
{
    int min = _nums[0];
    for(int i = 0; i < _size; i++)
    {
        if(min > _nums[i])
        {
            min = _nums[i];
        }
    }
    return min;
}

int main()
{
    int N;
    cin >> N;
    
    int nums[1000000];
    
    for(int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
  
    int max = GetMax(nums, N);
    int min = GetMin(nums, N);
    
    cout << min << " " << max;
}