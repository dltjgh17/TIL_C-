#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<n+1; i++){
        int count = 0;
        for (int j=1; j<n+1; j++){
            if(i%j == 0){
                count += 1;
            }
        }if (count >= 3){
            answer += 1;
        }
    }
    return answer;
}