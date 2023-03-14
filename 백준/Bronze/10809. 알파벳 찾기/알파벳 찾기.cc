#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    
    vector<int> countVec(26, -1);        // 알파벳 인덱스 벡터
    
    for(int i = 97; i < 123; i++)
    {
        for(int j = 0; j < S.length(); j++)
        {
            if(countVec[i - 97] == -1 && (int)S[j] == i)
            {
                countVec[i - 97] = j;
            }
        }
    }
    
    for(int i = 0; i < countVec.size(); i++)
    {
        cout << countVec[i] << " ";
    }
}