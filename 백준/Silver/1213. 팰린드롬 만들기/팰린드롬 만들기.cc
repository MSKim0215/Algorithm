#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string word;
    cin >> word;
    
    map<char, int> alphabetMap;
    for(int i = 0; i < word.length(); i++)
    {
        alphabetMap[word[i]]++;
    }
    
    string result;
    char mid;
    int oddCount = 0;
    for(int i = 'Z'; i >= 'A'; i--)
    {
        if(!alphabetMap[i]) continue;
        
        if(alphabetMap[i] % 2 != 0)
        {
            mid = (char)i;
            oddCount++;
            alphabetMap[i]--;
        }
        
        if(oddCount == 2) break;
        
        for(int j = 0; j < alphabetMap[i]; j+= 2)
        {
            result = char(i) + result;
            result += char(i);
        }
    }
    
    if(oddCount == 2)
    {
       cout << "I'm Sorry Hansoo\n";
       return 0;
    }
    
    if(mid)
    {
        result.insert(result.begin() + result.size() / 2, mid);
    }
    
    cout << result << "\n";
}
