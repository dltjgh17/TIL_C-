#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string alpha = "abcdefghij";
    
    string num = to_string(age);
    for (char digit : num){
        answer += alpha[digit-'0'];
    }
    return answer;
}