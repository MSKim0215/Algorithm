#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
    double totalSum = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        totalSum += arr[i];
    }
    
    return totalSum / arr.size();
}