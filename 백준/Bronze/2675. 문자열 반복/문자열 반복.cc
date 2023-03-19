#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    vector<string> P(T);
    for(int i = 0; i < T; i++)
    {
        int R;
        string S;
        cin >> R >> S;
        
        for(int j = 0; j < S.length(); j++)
        {
            int count = 0;
            while(count < R)
            {
                P[i] += S[j];
                count++;
            }
        }
    }
    
    for(int i = 0; i < T; i++)
    {
        cout << P[i] << "\n";
    }
}