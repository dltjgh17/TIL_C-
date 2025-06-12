#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max_num = *max_element(array.begin(), array.end());
    answer.push_back(max_num);
    for(int i=0; i<array.size(); i++){
        if(max_num == array[i]){
            answer.push_back(i);
        }
    }
    return answer;
}