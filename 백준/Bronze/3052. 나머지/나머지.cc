#include<iostream>

using namespace std;

int main()
{
    int counts[10];
    int countSize = sizeof(counts) / sizeof(*counts);
    for(int i = 0; i < countSize; i++)
    {
        cin >> counts[i];
        counts[i] %= 42;
    }
    
    int result = 0;
    for(int i = 0; i < countSize; i++)
    {
        int count = 0;
        for(int j = i + 1; j < countSize; j++)
        {
            if(counts[i] == counts[j]) count++;
        }
        if(count == 0) result++;
    }
    
    cout << result;
}