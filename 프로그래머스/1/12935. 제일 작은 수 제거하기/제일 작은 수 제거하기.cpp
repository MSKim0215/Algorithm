#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int targetIndex = 0;
    int minValue = arr[targetIndex];
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(minValue > arr[i])
        {
            minValue = arr[i];
            targetIndex = i;
        }
    }
    
    arr.erase(arr.begin() + targetIndex);
    
    if(arr.size() == 0) arr.push_back(-1);
    return arr;
}