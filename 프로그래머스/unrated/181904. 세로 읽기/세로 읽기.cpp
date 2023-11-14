#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) 
{
    vector<string> temps;
    
    string tempStr = "";
    
    int count = 0; 
    
    for(int i = 0; i < my_string.length(); i++)
    {
        tempStr += my_string[i];
        count++;
        
        if(count == m)
        {   // m회 마다 줄바꿈
            temps.push_back(tempStr);
            tempStr = "";
            count = 0;
        }
    }
    
    string answer = "";
    
    for(int i = 0; i < temps.size(); i++)
    {
        answer += temps[i][c - 1];
    }
    
    return answer;
}