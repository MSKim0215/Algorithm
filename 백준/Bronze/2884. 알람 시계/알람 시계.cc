#include<iostream>

using namespace std;

int main()
{
    int H, M;
    
    cin >> H >> M;
    
    int tempMin = M - 45;
    
    if(M < 45)
    {
        tempMin += 60;
        
        if(H == 0) H = 23;
        else H--;
    }
    
    M = tempMin;
    
    cout << H << " " << M;
}