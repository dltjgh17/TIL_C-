#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (string q : quiz) {
        stringstream ss(q);
        int x, y, z;
        char op, eq;

        ss >> x >> op >> y >> eq >> z;

        int result = (op == '+') ? x + y : x - y;
        answer.push_back(result == z ? "O" : "X");
    }
    return answer;
}