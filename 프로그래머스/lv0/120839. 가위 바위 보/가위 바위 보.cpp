#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {  
    for(int i = 0; i < rsp.length(); i++)
    {
        if(rsp[i] == '2') rsp[i] = '0';
        else if(rsp[i] == '0') rsp[i] = '5';
        else if(rsp[i] == '5') rsp[i] = '2';
    }
    
    return rsp;
}