#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int oddCount = 0, evenCount = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    
    answer.push_back(evenCount);
    answer.push_back(oddCount);
    
    return answer;
}