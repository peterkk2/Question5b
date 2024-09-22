#include <iostream>
using namespace std;

int main() {
    // (i) Print my your name
    cout << "KAAYA PETER" << endl;

    // (ii) Print multiples of 3 from 1 to 20
    for (int i = 1; i <= 20; ++i) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}

