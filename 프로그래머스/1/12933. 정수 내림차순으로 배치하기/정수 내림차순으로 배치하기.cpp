#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    vector<int> digit;
    
    for (char c:s){
        digit.push_back(c-'0');
    }
    sort(digit.begin(), digit.end(), greater<int>());
    long long answer = 0;
    for (int d : digit){
        answer = answer *10 +d;
    }
    return answer;
}