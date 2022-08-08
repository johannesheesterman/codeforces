#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int result = m / 2 * n;
    if (m % 2 > 0) {
        result = result + n / 2;
    }
    
    cout << result << endl;

    return 0;
}
