#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {  
    
    if(my_string.length() < is_suffix.length()) return 0;
    
    bool isCheck = false;
    for(int i = my_string.length() - 1; i >= 0;)
    {
        for(int j = is_suffix.length() - 1; j >= 0; j--)
        {
            if(!isCheck)
            {
                if(my_string[i] == is_suffix[j])
                {
                    i--;
                    isCheck = true;
                }
                else return 0;
            }
            else
            {
                if(my_string[i] == is_suffix[j])
                {
                    if(i == 0)
                    {
                        return 1;
                    }
                    else
                    {
                        i--;
                        isCheck = true; 
                    }
                }
                else return 0;
            }
        }
        
        if(isCheck)
        {
            return 1;
        }
    }
}