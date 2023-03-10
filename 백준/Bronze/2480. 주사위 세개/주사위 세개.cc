#include<iostream>

using namespace std;

int main()
{
    int diceA, diceB, diceC;
    cin >> diceA >> diceB >> diceC;
    
    if(diceA == diceB && diceB == diceC)
    {    // 같은 눈 3개: 10000 + (눈) x 1000
        cout << 10000 + diceA * 1000;
    }
    else if(diceA == diceB)
    {    // 같은 눈 2개: 1000 + (눈) x 100
        cout << 1000 + diceA * 100;
    }
    else if(diceA == diceC)
    {
        cout << 1000 + diceC * 100;
    }
    else if(diceB == diceC)
    {
        cout << 1000 + diceB * 100;
    }
    else
    {
        int max = 0;
        if(max < diceA)
        {
            max = diceA;
        }
        
        if(max < diceB)
        {
            max = diceB;
        }
        
        if(max < diceC)
        {
            max = diceC;
        }
        
        cout << max * 100;
    }
}