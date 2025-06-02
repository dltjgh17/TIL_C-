#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (char e : rsp){
        if (e == '0'){
            answer = answer+ '5';
        }else if (e == '2'){
            answer = answer+ '0';
        }else {
            answer = answer + '2';
        }
    }
    return answer;
}