#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char c : my_string){
        if (c != 'a' && c != 'i' && c != 'e' && c != 'o' && c != 'u'){
            answer += c;
        }
    }
    return answer;
}