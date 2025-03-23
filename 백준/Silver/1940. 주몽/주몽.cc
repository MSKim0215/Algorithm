#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ingredientCount;
    cin >> ingredientCount;
    
    int tradeNumber;
    cin >> tradeNumber;
    
    int ingredients[15001];
    for(int i = 0; i < ingredientCount; i++)
    {
        cin >> ingredients[i];
    }
    
    int answer = 0;
    if(tradeNumber > 200000)
    {
        cout << answer << "\n";
        return 0;
    }
    
    for(int i = 0; i < ingredientCount; i++)
    {
        for(int j = i + 1; j < ingredientCount; j++)
        {
            if(ingredients[i] + ingredients[j] == tradeNumber)
            {
                answer++;
            }
        }
    }
    
    cout << answer << "\n";
}
