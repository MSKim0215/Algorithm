#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int posX = dot[0];
    int posY = dot[1];
    
    if(posX > 0 && posY > 0) return 1;
    else if(posX < 0 && posY > 0) return 2;
    else if(posX < 0 && posY < 0) return 3;
    else if(posX > 0 && posY < 0) return 4;
}