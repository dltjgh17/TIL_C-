#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int a = 0;
    int b = 0;
    for (int i=0; i<numbers.size(); i++){
        if (numbers[i] > a){
            b = a;
            a = numbers[i];
        }
        else if(numbers[i] > b){
            b = numbers[i];
        }
    }
    int answer = a * b;
    return answer;
}