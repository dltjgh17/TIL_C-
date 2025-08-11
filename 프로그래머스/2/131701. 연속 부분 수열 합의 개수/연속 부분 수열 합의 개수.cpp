#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    vector<int> arr(elements);
    arr.insert(arr.end(), elements.begin(), elements.end());

    vector<int> prefix(arr.size()+1, 0);
    for (int i = 0; i < arr.size(); ++i) prefix[i+1] = prefix[i] + arr[i];

    unordered_set<int> sums;
    sums.reserve(n*n*2);

    for (int len = 1; len <= n; ++len) {
        for (int st = 0; st < n; ++st) {
            int ed = st + len;
            int s = prefix[ed] - prefix[st];
            sums.insert(s);
        }
    }
    return (int)sums.size();
}
