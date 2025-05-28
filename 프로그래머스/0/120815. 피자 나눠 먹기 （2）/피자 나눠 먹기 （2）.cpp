#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int p = 6;
    int a = n;
    // n값과 6의 최대공약수를 구하는 로직
    while (p!=0) {
        int temp = p;
        p = a % p;
        a = temp;
    }
    // n값을 6과의 최대공약수로 나누면 필요한 판 수를 구할 수 있음!
    int answer = n/a;
    return answer;
}