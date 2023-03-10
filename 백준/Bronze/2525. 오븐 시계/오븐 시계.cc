#include<iostream>

using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B;
    cin >> C;
    
    if(B + C < 60)
    {
        cout << A << " " << (B+C);
    }
    else
    {
        int tempMin = B + C - 60;

        while(tempMin >= 0)
        {
            if(A == 23) A = 0;
            else A++;
            
            if(tempMin >= 60)
            {
                tempMin -= 60;
            }
            else break;
        }
        
        cout << A << " " << tempMin;
    }
}