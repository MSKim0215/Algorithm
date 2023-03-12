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

int GetMaxIndex(int _nums[], int _size, int _target)
{
    for(int i = 0; i < _size; i++)
    {
        if(_target == _nums[i])
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    int nums[9];
    int size = sizeof(nums)/sizeof(*nums);
    
    for(int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    
    int max = GetMax(nums, size);
    cout << max << "\n";
    
    int targetIndex = GetMaxIndex(nums, size, max);
    cout << targetIndex << "\n";
}