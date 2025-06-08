#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for (int i=1; i<cipher.length()+1; i++){
        if(code * i <= cipher.length()){
            answer += cipher[code*i-1];
        }
    }
    return answer;
}