#include <iostream>

using namespace std;

int main() {

    int c;
    cin >> c;
    
    for (int i = 0; i < c; i++) {
   
        string word;
        cin >> word;

        int length = word.length();

        if (length <= 10) {
            cout << word << endl;
        }
        else {
            cout << word[0] << length - 2 << word[length - 1] << endl;
        }
    }

    return 0;
}
