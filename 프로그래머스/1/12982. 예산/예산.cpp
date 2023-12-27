#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) 
{
    sort(d.begin(), d.end());       // 오름차순 정렬
    
    // 최대로 몇 팀까지 가능한지 체크한다.
    int count = 0;
    int totalSum = 0;
    for(int i = 0; i < d.size(); i++)
    {
        totalSum += d[i];
        count++;
        
        if(totalSum > budget)
        {
            totalSum -= d[i];
            count--;
            break;
        }
    }
    
    return count;
}