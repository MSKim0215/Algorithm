#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++)
    {
        int tempArr = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = tempArr;
    }
    
    answer = arr;
    
    return answer;
}