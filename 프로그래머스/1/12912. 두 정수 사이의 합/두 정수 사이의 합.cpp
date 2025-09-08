#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) { 
    vector<int>sol;
    long long answer = 0;
    if (a < b){
        for (int i=a; i<=b; i++){
            sol.push_back(i);
        }
    }
    else{
        for (int i=b; i<=a; i++){
            sol.push_back(i);
        }
    }
    for (int ans : sol){
        answer += ans;
    }
    return answer;
}