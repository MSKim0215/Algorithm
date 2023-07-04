#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    bool isCheck = true;
    
    for(int i = 0; i < is_prefix.length();)
    {
        for(int j = 0; j < my_string.length(); j++)
        {
            if(isCheck && my_string[j] == is_prefix[i])
            {
                if(i < is_prefix.length() - 1)
                {
                    i++;
                    continue;
                }
                else return 1;
            }
            else return 0;
        }
    }
    return 1;
}