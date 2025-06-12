#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for (int i = 0; i<s.length(); i++){
        count = 0;
        for (int j=0; j<s.length(); j++){
            if( i != j && s[i] == s[j]){
                count++;
            }
        }if (count == 0){
            answer += s[i];
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}