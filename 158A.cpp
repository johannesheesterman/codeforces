#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    k = k - 1;

    vector<int> scores;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;    
        scores.push_back(score);
    }

    int target = scores[k];
    int result = count_if(scores.begin(), scores.end(), [target](int x) {
        return x > 0 && x >= target;        
    });
    cout << result << endl;

    return 0;
}
