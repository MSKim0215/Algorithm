#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    
    int wordLength = word.length();
    int repeatCount = wordLength / 2;
    int isBool = 1;
    for(int i = 0; i < repeatCount; i++)
    {
        if(word[i] != word[wordLength - i - 1])
        {
            isBool = 0;
            break;
        }
    }
    cout << isBool;
}