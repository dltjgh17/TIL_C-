#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int>temp;
    int min;
    for(int i=0; i<array.size(); i++){
        temp.push_back(abs(array[i]-n));
    }
    min = *min_element(temp.begin(), temp.end());
    
    bool first = true;
    for (int j=0; j<array.size(); j++){
        if(temp[j] == min){
            if (first || array[j] < answer){
                answer = array[j];
                first = false;
            }
        }
    }
    return answer;
}