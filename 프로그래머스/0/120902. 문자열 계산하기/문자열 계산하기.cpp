#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    char op = '+';
    
    for(int i=0; i<=my_string.length(); i++){
        if(i == my_string.size() || my_string[i] == ' '){
            if(temp == "+" || temp == "-"){
                op = temp[0];
            }else if (!temp.empty()){
                int num = stoi(temp);
                if (op == '+')answer += num;
                else if (op == '-')answer -= num;
            }
            temp = "";
        }else {
            temp += my_string[i];
        }
    }
    return answer;
}