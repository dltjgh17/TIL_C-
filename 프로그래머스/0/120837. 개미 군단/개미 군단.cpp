#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int general = hp/5;
    hp %= 5;
    
    int soldier = hp/3;
    hp %= 3;
    
    int worker = hp;
    
    return answer = general + soldier + worker;
}