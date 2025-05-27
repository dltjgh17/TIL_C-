#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int odd = 0;
    int even = 0;
    for (int num : num_list)
        if (num % 2 == 0){
            even += 1;
        } else {
            odd += 1;
        }
    vector<int> answer = {even, odd};
    return answer;
}