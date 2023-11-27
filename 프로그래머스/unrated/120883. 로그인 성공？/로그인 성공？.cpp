#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
    vector<string> answer;
    
    for(int i = 0; i < db.size(); i++)
    {
        if(db[i][0] == id_pw[0])
        {   // id가 동일할 경우
            if(db[i][1] == id_pw[1])
            {   // pw도 동일할 경우
                answer.push_back("login");
            }
            else
            {   // pw가 동일하지 않을 경우
                answer.push_back("wrong pw");
            }
        }
        else
        {   // id가 동일하지 않을 경우
            answer.push_back("fail");
        }
    }
    
    int login_count = 0;
    int wrong_count = 0;
    int fail_count = 0;
    
    for(int i = 0; i < answer.size(); i++)
    {
        if(answer[i] == "login")
        {
            login_count++;
        }
        else if(answer[i] == "wrong pw")
        {
            wrong_count++;
        }
        else if(answer[i] == "fail_count")
        {
            fail_count++;
        }
    }
    
    if(login_count > 0) return "login";
    if(wrong_count > 0) return "wrong pw";
    if(fail_count > 0) return "fail";
}