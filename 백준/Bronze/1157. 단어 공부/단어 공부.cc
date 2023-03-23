#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cin >> word;
    
    map<char, int> countMaps;
    for(int i = 0; i < 26; i++)
    {
        countMaps[65 + i] = 0;
    }
    
    for(int i = 0; i < word.length(); i++)
    {
        countMaps[toupper(word[i])]++;
    }
    
    vector<char> maxChars;
    int maxValue = -1;
    
    for(const auto& pair : countMaps)
    {
        if(pair.second > maxValue)
        {
            maxChars.clear();
            maxChars.push_back(pair.first);
            maxValue = pair.second;
        }
        else if(pair.second == maxValue)
        {
            maxChars.push_back(pair.first);
        }
    }
    
    if(maxChars.size() != 1)
    {
        cout << "?";
    }
    else
    {
        cout << maxChars[0];
    }
}