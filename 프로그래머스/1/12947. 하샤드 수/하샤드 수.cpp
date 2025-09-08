#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    vector<int> sol;
    int cnt = 0;
    bool answer = true;    
    for (char c:s){
        sol.push_back(c-'0');
    }
    for (int d:sol){
        cnt += d;
    }
    if (x%cnt == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}