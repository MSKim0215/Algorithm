#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    string answer = "";
    int indiceCount = 0;
    
    sort(indices.begin(), indices.end());   // 오름차순 정렬
    
    for(int i = 0; i < my_string.length(); i++)
    {
        if(i != indices[indiceCount])
        {
            answer += my_string[i];
        }
        else
        {
            indiceCount++;
        }
    }
    
    return answer;
}