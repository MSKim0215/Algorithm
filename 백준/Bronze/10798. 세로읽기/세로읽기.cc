#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words[5];
    for(int i = 0; i < 5; i++)
    {
        getline(cin, words[i]);
    }
    
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i < words[j].length())
            {
                cout << words[j][i];
            }
        }
    }
}