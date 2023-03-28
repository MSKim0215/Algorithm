#include <iostream>

using namespace std;

int main()
{
    int tables[9][9];
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> tables[i][j];
        }
    }
    
    int max = tables[0][0];
    int targetX = 0;
    int targetY = 0;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(max < tables[i][j])
            {
                max = tables[i][j];
                targetX = i;
                targetY = j;
            }
        }
    }
    
    cout << max << "\n";
    cout << targetX + 1 << " " << targetY + 1;
}