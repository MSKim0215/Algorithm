#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 0;
    
    for(int y = 0; y < arr.size(); y++)
    {
        for(int x = 0; x < arr[y].size(); x++)
        {
            if(arr[y][x] == arr[x][y])
            {
                answer = 1;
            }
            else
            {
                answer = 0;
                return answer;
            }
        }
    }
    
    return answer;
}