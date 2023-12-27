#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p)
{
    int p_length = p.length();  // p의 길이
    
    vector<string> arr;
    int count = 0;
    
    for(int i = 0; i < t.length(); i++)
    {
        if(i + p_length > t.length()) break;
        
        string temp = "";
        for(int j = i; j < i + p_length; j++)
        {
            temp += t[j];
        }
        
        arr.push_back(temp);
    }
    
    int answer = 0;
   
    for(int i = 0; i < arr.size(); i++)
    {
        long long targetNum = stoll(arr[i]);
        if(targetNum <= stoll(p))
        {
            answer++;
        }
    }
    
    return answer;
}