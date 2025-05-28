#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    double res = (double)n/7;
    int answer = (int)ceil(res);
    return answer;
}