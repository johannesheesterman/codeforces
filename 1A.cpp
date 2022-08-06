#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    if (a == 1) {
        cout << (n * m) << endl;
        return 0;
    }

    long long na = (n + (a - 1)) / a;
    long long ma = (m + (a - 1)) / a;

    cout << (na * ma) << endl;

    return 0;
}
