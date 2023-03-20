#include <iostream>
#include <string>

using namespace std;

int main()
{
    string answer;
    
    for(int i = 0; i < 100; i++)
    {
        getline(cin, answer);
        
        if(answer.empty()) break;
        if(answer.length() > 100) answer.substr(0, 100);
        
        cout << answer << "\n";
    }
}