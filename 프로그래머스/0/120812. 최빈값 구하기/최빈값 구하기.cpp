#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    // 배열내에서 최빈값을 셀 배열 선언
    int count[1001] = {0};
    // 최빈값 비교를 위한 값 선언
    int max_count = 0;
    // 최빈값이 복수일 경우를 판별
    int mode = -1;
    // 최빈값 복수 여부에 따라 true/false 반환
    bool multiple = false;
    
    // 배열 순회 시작
    for (int i=0; i<array.size(); i++){\
        // count 배열의 해당 인덱스 숫자를 증가 시킴
        count[array[i]]++;
        
        // count배열의 값과 현재 최빈값을 배교
        if (count[array[i]] > max_count) {
            // 조건문이 참이라면 최빈값 갱신, 복수 여부를 판별하기 위한 mode갱신, 중복이 없다는 기준이기 때문에 false반환
            max_count = count[array[i]];
            mode = array[i];
            multiple = false;
        }
        // 현재 배열의 최빈값과 마지막으로 갱신된 최빈값의 값이 같고, 모드로 갱신되어있는 배열의 값과 다를 때
        else if (count[array[i]] == max_count && array[i] != mode){
            // true반환
            multiple = true;
        }
    }
    // ? : 연산자 사용 참/거짓에 따른 반환 
    // multiple 이 참이면 중복이므로 "-1", 아니라면 현재 최빈값을 반환
    return multiple ? -1 : mode;
}