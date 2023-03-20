#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> whites(6, 0);
    for(int i = 0; i < whites.size(); i++)
    {
        cin >> whites[i];
    }
    
    vector<int> blacks(6);
    blacks[0] = 1;
    blacks[1] = 1;
    blacks[2] = 2;
    blacks[3] = 2;
    blacks[4] = 2;
    blacks[5] = 8;
    
    for(int i = 0; i < blacks.size(); i++)
    {
        int result = blacks[i] - whites[i];
        cout << result << " ";
    }
}