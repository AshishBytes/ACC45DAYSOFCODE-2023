#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int maxPeople = X / (2 * Y);
        cout << maxPeople << endl;
    }
    return 0;
}
