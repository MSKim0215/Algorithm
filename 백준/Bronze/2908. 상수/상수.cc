#include <iostream>
#include <string>

using namespace std;

string reverse(string _input)
{
    string temp = "";
    for(int i = _input.length() - 1; i >= 0; i--)
    {
        temp += _input[i];
    }
    return temp;
}

int main()
{
    string A, B;
    cin >> A >> B;
    
    int changeA = stoi(reverse(A));
    int changeB = stoi(reverse(B));
    
    if(changeA > changeB) cout << changeA;
    else cout << changeB;
}