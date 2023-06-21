#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int lastNumber = answer[answer.size() - 1];
    int lastReturnNumber = answer[answer.size() - 2];
    
    if(lastNumber > lastReturnNumber)
    {
        answer.push_back(lastNumber - lastReturnNumber);
    }
    else
    {
        answer.push_back(lastNumber * 2);
    }
    
    return answer;
}