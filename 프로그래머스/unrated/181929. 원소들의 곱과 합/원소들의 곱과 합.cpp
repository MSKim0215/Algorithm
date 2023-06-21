#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0, multiple = 1;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        sum += num_list[i];
        multiple *= num_list[i];
    }
    
    if(sum * sum > multiple) return 1;
    return 0;
}