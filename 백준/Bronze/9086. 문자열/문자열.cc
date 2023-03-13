#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    vector<string> words(T);
    for(int i = 0; i < words.size(); i++)
    {
        cin >> words[i];
        cout << words[i].front() << words[i].back() << "\n";
    }
}