#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> croatias = 
        { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    
    string word;
    cin >> word;
    
    int count = 0;
    for(int i = 0; i < word.length();)
    {
        bool isCheck = false;
        for(int j = 0; j < croatias.size(); j++)
        {
            int pos = word.find(croatias[j], i);
            if(pos == i)
            {
                isCheck = true;
                i += croatias[j].length();
                break;
            }
        }
        
        if(!isCheck) i++;
        count++;
    }
    
    cout << count;
}