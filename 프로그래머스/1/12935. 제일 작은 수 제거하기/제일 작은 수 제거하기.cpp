#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int len = arr.size();
    int min_num = 100000;
    for(int i=0; i<len; i++)
    {
        if(arr[i] <= min_num)
        {
            min_num = arr[i];
        }
    }
    for(int i=0; i<len; i++)
    {
        if(arr[i] != min_num)
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() <1)
    {
        answer.push_back(-1);
    }
    return answer;
}