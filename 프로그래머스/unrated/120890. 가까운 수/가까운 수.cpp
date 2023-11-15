#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer = array[0];
    int diffValue = (array[0] >= n) ? (array[0] - n) : (n - array[0]);
    
    for(int i = 0; i < array.size(); i++)
    {
        int target;
        
        if(array[i] >= n)
        {
            target = array[i] - n;
        }
        else
        {
            target = n - array[i];
        }
        
        if(diffValue > target)
        {
            answer = array[i];
            diffValue = target;
        }
        else if(diffValue == target)
        {
            if(answer > array[i])
            {
                answer = array[i];
            }
            diffValue = target;
        }
    }
    
    return answer;
}