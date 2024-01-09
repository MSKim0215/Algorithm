#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index)
{
    for(int i = 0; i < s.length(); i++)
    {
        int now_count = 0;
        
        while(true)
        {
            if(now_count == index)
            {   // index만큼 이동했으면 반복 종료
                break;
            }
            
            s[i]++;
            if(s[i] > 'z') s[i] = 'a';
            
            
            if(skip.find(s[i]) == string::npos)
            {
                now_count++;
            }
        }
    }
    
    return s;
}