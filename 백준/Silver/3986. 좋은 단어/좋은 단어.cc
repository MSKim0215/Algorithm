#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int answer = 0;
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        
        stack<char> inputStack;
        for(int j = 0; j < input.length(); j++)
        {
            if(inputStack.size() > 0)
            {
                if(inputStack.top() == input[j])
                {
                    inputStack.pop();
                }
                else
                {
                    inputStack.push(input[j]);
                }
            }
            else
            {
                inputStack.push(input[j]);
            }
        }
        
        if(inputStack.size() == 0)
        {
            answer++;
        }
    }
    
    cout << answer << "\n";
}