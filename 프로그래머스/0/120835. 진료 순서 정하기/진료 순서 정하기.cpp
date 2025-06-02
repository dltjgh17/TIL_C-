#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    int n = emergency.size();
    vector<int> answer(n, 1);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (emergency[i] < emergency[j]){
                answer[i]++;
            }
        }
    }
    return answer;
}