#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            int num; 
            cin >> num;
            if (num == 1) {
                cout << (abs(j - 3) + abs(i - 3)) << endl; 
                return 0;
            }
        }
    }

    return 0;
}
