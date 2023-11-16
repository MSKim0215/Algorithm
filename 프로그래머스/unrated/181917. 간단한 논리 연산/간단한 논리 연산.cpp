#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4)
{
    // ∨: 둘 중 하나가 맞으면 T
    // ∧: 둘 다 맞아야지 T

    return ((x1 || x2) && (x3 || x4));
}