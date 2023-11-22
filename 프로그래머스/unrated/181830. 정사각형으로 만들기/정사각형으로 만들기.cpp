#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{
    int vertical = arr.size();
    int horizontal = arr[0].size();
 
    // 같으면 바로 return
    if(vertical == horizontal) return arr;
    
    if(vertical > horizontal)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            while(true)
            {
                if(arr[i].size() == arr.size()) break;
                
                arr[i].push_back(0);
            }
        }
    }
    else
    {
        int count = horizontal - vertical;
        
        for(int i = 0; i < count; i++)
        {
            vector<int> tempArr;
            arr.push_back(tempArr);
        }
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i].size() < horizontal)
            {
                for(int j = 0; j < horizontal; j++)
                {
                    arr[i].push_back(0);
                }
            }
        }
    }
    
    return arr;
}