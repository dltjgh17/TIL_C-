#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    for (int i=0;i<array.size()-1;i++){
        for (int j=0;j<array.size()-1-i;j++){
            if (array[j] < array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int mid = array.size()/2;
    int answer = array[mid];
    return answer;
}