#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    vector<pair<string, int>> dict = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    
    string temp = "";
    for (int i =0; i<numbers.length(); i++){
        temp += numbers[i];
        for (auto& p : dict){
            if(temp == p.first){
                answer = answer * 10 + p.second;
                temp = "";
                break;
            }
        }
    }
    return answer;
}