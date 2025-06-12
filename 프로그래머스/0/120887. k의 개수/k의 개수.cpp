#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char n = k + '0';
    for (int r = i; r<=j; r++){
        string str = to_string(r);
        for (char ch : str){
            if (ch == n){
                answer++;
            }
        }
    }
    return answer;
}