#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1) {
            ++sum;
        }
    }

    cout << sum << endl;

    return 0;
}
