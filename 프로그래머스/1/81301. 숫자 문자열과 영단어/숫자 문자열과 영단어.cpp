#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s)
{
    vector<string> word = 
    {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"  
    };
    
    while(true)
    {    
        bool isCheck = false;
        
        for(int i = 0; i < word.size(); i++)
        {
            if(s.find(word[i]) != string::npos)
            {
                isCheck = true;
                s.replace(s.find(word[i]), word[i].length(), to_string(i));
                break;
            }
        }
        
        if(!isCheck) break;
    }
    
    return stoi(s);
}