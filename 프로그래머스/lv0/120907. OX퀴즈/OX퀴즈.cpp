#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i = 0; i < quiz.size(); i++)
    {
        vector<string> temps = split(quiz[i], " ");
        
        int front = stoi(temps[0]);
        int back = stoi(temps[2]);
        int result = stoi(temps[4]);
        
        if(temps[1] == "-")
        {
            if(front - back == result) answer.push_back("O");
            else answer.push_back("X");
        }
        else if(temps[1] == "+")
        {
            if(front + back == result) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    
    return answer;
}