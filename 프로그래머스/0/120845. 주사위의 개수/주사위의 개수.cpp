#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int r = box[0] / n;
    int c = box[1] / n;
    int h = box[2] / n;
    if (r == 1 && c ==1 && h == 1){
        answer = 1;
    }else {
        answer = r*c*h; 
    }
    return answer; 
}