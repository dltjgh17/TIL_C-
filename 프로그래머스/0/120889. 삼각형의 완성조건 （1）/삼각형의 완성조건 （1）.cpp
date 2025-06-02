#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            if (sides[j] > sides[j+1]){
                int temp = sides[j];
                sides[j] = sides[j+1];
                sides[j+1] = temp;
            }
        }
    }
    if (sides[2] < sides[1] + sides[0]){
        return 1;
    }else {
        return 2;
    }
}