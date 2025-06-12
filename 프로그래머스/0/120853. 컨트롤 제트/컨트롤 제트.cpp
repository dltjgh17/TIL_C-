#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int last = 0;
    string temp;
    for (int i=0; i<=s.length(); i++){
        if (i == s.length() || s[i] == ' '){
            if (temp == "Z"){
                answer -= last;
            }else{
                last = stoi(temp);
                answer += last;
            }temp = "";
        }else {
            temp += s[i];
        }
    }
    return answer;
}