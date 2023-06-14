#include <string>
#include <vector>

using namespace std;


vector<int> solution(int money) {
    vector<int> answer;
    const int ICE_AMERICANO = 5500;
    
    int coffeeCount = money / ICE_AMERICANO;
    int returnMoney = money % ICE_AMERICANO;
    
    answer.push_back(coffeeCount);
    answer.push_back(returnMoney);

    return answer;
}