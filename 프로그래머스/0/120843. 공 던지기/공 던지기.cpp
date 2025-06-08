#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int i = 2*(k-1);
    i = i % numbers.size();
    answer = numbers[i];
    return answer;
}