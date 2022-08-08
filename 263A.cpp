#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int row = 0;
    int col = 0;

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            int num; 
            cin >> num;
            if (num == 1) {
                row = j + 1;
                col = i + 1;

                cout << (abs(row - 3) + abs(col - 3)) << endl; 
                return 0;
            }
        }
    }

    return 0;
}
