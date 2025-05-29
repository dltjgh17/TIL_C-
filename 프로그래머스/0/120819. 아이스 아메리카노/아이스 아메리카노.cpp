#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    for (int i=0; i<200; i++){
        if (i * 5500 > money){
            answer.push_back(i-1);
            answer.push_back(money-5500*(i-1));
            return answer;
        }
        else if (i*5500 == money) {
            answer.push_back(i);
            answer.push_back(0);
            return answer;
        }
    }
    return answer;
}