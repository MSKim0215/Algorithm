#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> numbers(10, "");
    numbers[2] = "ABC";
    numbers[3] = "DEF";
    numbers[4] = "GHI";
    numbers[5] = "JKL";
    numbers[6] = "MNO";
    numbers[7] = "PQRS";
    numbers[8] = "TUV";
    numbers[9] = "WXYZ";
    
    string input;
    cin >> input;
    
    int result = 0;
    for(int i = 0; i < input.length(); i++)
    {
        for(int j = 0; j < numbers.size(); j++)
        {
            for(int k = 0; k < numbers[j].size(); k++)
            {
                if(numbers[j][k] == input[i])
                {
                    result += (j + 1);
                }
            }
        }
    }
    
    cout << result;
}