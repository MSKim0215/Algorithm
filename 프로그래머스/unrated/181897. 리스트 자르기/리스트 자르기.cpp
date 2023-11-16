#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) 
{
    vector<int> answer;
    
    if(n == 1)
    {   // n = 1 : num_list의 0번 인덱스부터 b번 인덱스까지
        for(int i = 0; i <= slicer[1]; i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if(n == 2)
    {   // n = 2 : num_list의 a번 인덱스부터 마지막 인덱스까지
        for(int i = slicer[0]; i < num_list.size(); i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if(n == 3)
    {   // n = 3 : num_list의 a번 인덱스부터 b번 인덱스까지
        for(int i = slicer[0]; i <= slicer[1]; i++)
        {
            answer.push_back(num_list[i]);
        }
    }
    else if(n == 4)
    {   // n = 4 : num_list의 a번 인덱스부터 b번 인덱스까지 c 간격으로
        for(int i = slicer[0]; i <= slicer[1]; i += slicer[2])
        {
            answer.push_back(num_list[i]);
        }
    }
    
    return answer;
}