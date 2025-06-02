#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (char e : my_string) {
        if (e >= '0' && e <= '9') {
            answer.push_back(e - '0');
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
