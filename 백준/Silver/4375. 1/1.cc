#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    while(scanf("%d", &input) != EOF)
    {
        long long target = 1;
        int count = 1;
        while(true)
        {
            if(target % input == 0) break;
            
            target = target * 10 + 1;
            target %= input;
            
            count++;
        }
        
        cout << count << endl;
    }
}