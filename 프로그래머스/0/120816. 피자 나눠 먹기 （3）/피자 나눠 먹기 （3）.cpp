#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int slice, int n) {
    double res = (double)n / (double)slice;
    int answer = (int)ceil(res);
    return answer;
}