#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<int> numbers) {
    int answer = INT_MIN;
    for (int i=0; i<numbers.size(); i++){
        for (int j = 0; j<numbers.size(); j++){
            if(numbers[i] * numbers[j] >= answer && i != j){
                answer = numbers[i] * numbers[j];
            }
        }
    }
    return answer;
}