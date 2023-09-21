#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x >= y) {
            cout << y;
        } else {
            cout << x + 2 * (y - x);
        }
        cout << endl;
    }
    return 0;
}
