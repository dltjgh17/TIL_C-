#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int result = 1;
    for (int i=1; i<12; i++){
        result = result * i;
        answer += 1;
        if(n<result){
            return answer-1;
        }
    }
    return answer;
}