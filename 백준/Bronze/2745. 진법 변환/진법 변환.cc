#include <bits/stdc++.h>

using namespace std;

int main()
{
    string N;
    int B;
    cin >> N >> B;
    
    map<char, int> alphabetMap;
    for(int i = 0; i < 26; i++)
    {
        alphabetMap.insert(pair<char, int>((char)i + 65, 10 + i));
    }
    
    int totalSum = 0;
    int index = N.length() - 1;
    for(int i = 0; i < N.length(); i++)
    {
        if(N[i] >= 'A' && N[i] <= 'Z')
        {
            totalSum += (alphabetMap[N[i]] * pow(B, index));
        }
        else
        {
            totalSum += ((N[i] - '0') * pow(B, index));
        }

        index--;
    }
    
    cout << totalSum << endl;
}