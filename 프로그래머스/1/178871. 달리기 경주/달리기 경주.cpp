#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer = players;
    
    unordered_map<string, int> pos;
    for(int i=0; i<answer.size(); ++i){
        pos[answer[i]] = i;
    }
    
    for(const string& c : callings){
        int idx = pos[c];
        
        if(idx == 0) continue;
        
        swap(answer[idx], answer[idx-1]);
        pos[answer[idx]] = idx;
        pos[answer[idx-1]] = idx-1;
    }
    
    return answer;
}