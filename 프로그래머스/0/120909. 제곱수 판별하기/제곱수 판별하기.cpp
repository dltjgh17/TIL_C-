#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    bool valid = false;
    int root = sqrt(n);
    if (root * root == n){
        valid = true;
    }
    int answer = valid ? 1:2;
    return answer;
}