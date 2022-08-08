#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; i++) {
        string stmnt;
        cin >> stmnt;
        if (stmnt[1] == '+') {
            ++result;
        }
        else {
            --result;
        }
    }

    cout << result << endl;

    return 0;
}
