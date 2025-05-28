#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int food = n * 12000;
    int drink = k * 2000;
    int free_drink = (n / 10) * 2000;
    int answer = (food + drink) - free_drink;
    return answer;
}