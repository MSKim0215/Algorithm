#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.length() / 2; i++)
    {
        char temp = my_string[i];
        my_string[i] = my_string[my_string.length() - 1 - i];
        my_string[my_string.length() - 1 - i] = temp;
    }
    
    return my_string;
}