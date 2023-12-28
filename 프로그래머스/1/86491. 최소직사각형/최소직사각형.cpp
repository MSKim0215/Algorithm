#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define WIDTH 0
#define HEIGHT 1

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int GetMostValue(vector<vector<int>> sizes, int value)
{
    int result = sizes[0][value];
    
    for(int i = 0; i < sizes.size(); i++)
    {
        if(result < sizes[i][value])
        {
            result = sizes[i][value];
        }
    }
    
    return result;
}

int solution(vector<vector<int>> sizes) 
{
    // 1. 두 변의 길이 중 가장 긴 길이를 가로로 맞춘다.
    for(int i = 0; i < sizes.size(); i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            swap(sizes[i][0], sizes[i][1]);
        }
    }
    
    // 2. 가로, 세로에서 가장 큰 값을 곱해준다.
    return GetMostValue(sizes, WIDTH) * GetMostValue(sizes, HEIGHT);
}