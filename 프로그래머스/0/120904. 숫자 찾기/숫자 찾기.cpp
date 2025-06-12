#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string str = to_string(num);
    char K = k + '0';
    for (int i=0; i<str.length(); i++){
        if(str[i] == K){
            return answer = i+1;
        }else if(i == str.length()-1 && str[i] != K){
            answer = -1;
        }
    }
    return answer;
}