#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int extraChairs = max(0, X - Y);
        cout << extraChairs << endl;
    }
    return 0;
}